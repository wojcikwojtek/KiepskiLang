
// Generated from KiepskiLang.g4 by ANTLR 4.13.2


#include "LLVMGenerator.h"
#include <llvm/Support/FileSystem.h>
#include <llvm/Support/raw_ostream.h>

std::unique_ptr<LLVMContext> LLVMGenerator::theContext = std::make_unique<LLVMContext>();

std::unique_ptr<Module> LLVMGenerator::theModule = std::make_unique<Module>("my cool jit", *theContext);

std::unique_ptr<IRBuilder<>> LLVMGenerator::builder = std::make_unique<IRBuilder<>>(*theContext);

std::map<std::string, Value*> LLVMGenerator::namedValues;

Value* LLVMGenerator::logErrorV(std::string str) {
    std::cerr << "Error: " << str << std::endl;
    return nullptr;
}

std::any LLVMGenerator::visitProgram(KiepskiLangParser::ProgramContext* ctx) {
	return visitStart(ctx->start());
}

std::any LLVMGenerator::visitStart(KiepskiLangParser::StartContext* ctx) {
    FunctionType* FT = FunctionType::get(Type::getInt32Ty(*theContext), false);
    Function* mainFunction = Function::Create(FT, Function::ExternalLinkage, "main", *theModule);

    BasicBlock* BB = BasicBlock::Create(*theContext, "entry", mainFunction);
    builder->SetInsertPoint(BB);
    for (auto statement : ctx->statement()) {
        visitStatement(statement);
    }

    builder->CreateRet(ConstantInt::get(Type::getInt32Ty(*theContext), 0, true));
    theModule->print(llvm::outs(), nullptr);

    std::error_code EC;
    llvm::raw_fd_ostream dest("kiepskiout.ll", EC, llvm::sys::fs::OF_None);

    if (EC) {
        std::cerr << "Nie mozna zapisac pliku: " << EC.message() << std::endl;
        return 0;
    }

    theModule->print(dest, nullptr);
    dest.flush();

    std::cout << "Zapisano LLVM IR do: " << "kiepskiout.ll" << std::endl;
    return 0;
}

std::any LLVMGenerator::visitStatement(KiepskiLangParser::StatementContext* ctx) {
    if (ctx->varDecl()) {
        return visitVarDecl(ctx->varDecl());
    }
    if (ctx->print()) {
        return visitPrint(ctx->print());
    }
    if (ctx->read()) {
        return visitRead(ctx->read());
    }
    if (ctx->expr()) {
        return visitExpr(ctx->expr());
    }
    return nullptr;
}

std::any LLVMGenerator::visitVarDecl(KiepskiLangParser::VarDeclContext* ctx) {
    Value* evaluatedExpr = std::any_cast<Value*>(visitExpr(ctx->expr()));
    if (!evaluatedExpr) {
        std::cerr << "Blad przy deklaracji zmiennej " + ctx->ID()->getText() << std::endl;
        return nullptr;
    }
    AllocaInst* allocatedVar = nullptr;
    if (ctx->TYPE()->getText() == "int") {
        allocatedVar = builder->CreateAlloca(Type::getInt32Ty(*theContext), nullptr, ctx->ID()->getText());
        if (evaluatedExpr->getType()->isFloatTy()) {
            evaluatedExpr = builder->CreateCast(Instruction::FPToSI, evaluatedExpr, Type::getInt32Ty(*theContext));
        }
    }
    if (ctx->TYPE()->getText() == "float") {
        allocatedVar = builder->CreateAlloca(Type::getFloatTy(*theContext), nullptr, ctx->ID()->getText());
        if (evaluatedExpr->getType()->isIntegerTy()) {
            evaluatedExpr = builder->CreateCast(Instruction::SIToFP, evaluatedExpr, Type::getFloatTy(*theContext));
        }
    }
    namedValues.insert({ ctx->ID()->getText(), allocatedVar });
    return (Value*)builder->CreateStore(evaluatedExpr, allocatedVar);
}

std::any LLVMGenerator::visitPrint(KiepskiLangParser::PrintContext* ctx) {
    llvm::Function* printfFunc = theModule->getFunction("printf");
    if (!printfFunc) {
        llvm::FunctionType* printfType = llvm::FunctionType::get(
            llvm::IntegerType::getInt32Ty(*theContext),  // return int
            llvm::PointerType::getUnqual(llvm::Type::getInt8Ty(*theContext)),  // char*
            true  // isVarArg
        );
        printfFunc = llvm::Function::Create(
            printfType, llvm::Function::ExternalLinkage, "printf", *theModule
        );
    }

    Value* val = std::any_cast<Value*>(visitExpr(ctx->expr()));
    if (val == nullptr) {
        std::cerr << "Nieprawidłowe expr w wyrażeniu print" << std::endl;
        return nullptr;
    }
    Value* formatStr = nullptr;
    if (val->getType()->isIntegerTy()) {
        formatStr = theModule->getNamedGlobal("intFormat");
        if (!formatStr) {
            formatStr = builder->CreateGlobalStringPtr("%d\n", "intFormat");
        }
    }
    if (val->getType()->isFloatTy()) {
        val = builder->CreateFPExt(val, Type::getDoubleTy(*theContext), val->getName() + "_double");
        formatStr = theModule->getNamedGlobal("doubleFormat");
        if (!formatStr) {
            formatStr = builder->CreateGlobalStringPtr("%f\n", "doubleFormat");
        }
    }
    builder->CreateCall(printfFunc, { formatStr, val });
    return nullptr;
}

std::any LLVMGenerator::visitRead(KiepskiLangParser::ReadContext* ctx) {
    std::string varName = ctx->ID()->getText();

    Value* v = namedValues[varName];
    if (!v) {
        return logErrorV("Unknown variable name: " + varName);
    }

    Function* scanfFunc = theModule->getFunction("scanf");
    if (!scanfFunc) {
        FunctionType* scanfType = FunctionType::get(
            IntegerType::getInt32Ty(*theContext),
            PointerType::getUnqual(Type::getInt8Ty(*theContext)),
            true
        );
        scanfFunc = Function::Create(
            scanfType, Function::ExternalLinkage, "scanf", *theModule
        );
    }
    //TODO: SCANF DLA ROZNYCH TYPOW
    llvm::Value* formatStr = builder->CreateGlobalStringPtr("%d", "fmt");
    builder->CreateCall(scanfFunc, { formatStr, v });
    return nullptr;
}

std::any LLVMGenerator::visitExpr(KiepskiLangParser::ExprContext* ctx) {
    if (dynamic_cast<KiepskiLangParser::MulExprContext*>(ctx)) {
        return visitMulExpr(dynamic_cast<KiepskiLangParser::MulExprContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::AddExprContext*>(ctx)) {
        return visitAddExpr(dynamic_cast<KiepskiLangParser::AddExprContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::IntLiteralContext*>(ctx)) {
        return visitIntLiteral(dynamic_cast<KiepskiLangParser::IntLiteralContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::FloatLiteralContext*>(ctx)) {
        return visitFloatLiteral(dynamic_cast<KiepskiLangParser::FloatLiteralContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::VarReferenceContext*>(ctx)) {
        return visitVarReference(dynamic_cast<KiepskiLangParser::VarReferenceContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::BracesContext*>(ctx)) {
        return visitBraces(dynamic_cast<KiepskiLangParser::BracesContext*>(ctx));
    }
    return nullptr;
}

std::any LLVMGenerator::visitAddExpr(KiepskiLangParser::AddExprContext* ctx) {
    auto leftexpr = ctx->expr(0);
    auto rightexpr = ctx->expr(1);

    Value* l = std::any_cast<Value*>(visitExpr(leftexpr));
    Value* r = std::any_cast<Value*>(visitExpr(rightexpr));

    if (!l || !r) {
        return nullptr;
    }

    std::string op = ctx->children[1]->getText();
    if (op == "+") {
        if (l->getType()->isIntegerTy() && r->getType()->isIntegerTy()) {
            return (Value*)builder->CreateAdd(l, r, "addtmp");
        }
        else if (l->getType()->isIntegerTy() && r->getType()->isFloatTy()) {
            l = builder->CreateCast(Instruction::SIToFP, l, Type::getFloatTy(*theContext));
            return (Value*)builder->CreateFAdd(l, r, "addtmp");
        }
        else if (l->getType()->isFloatTy() && r->getType()->isIntegerTy()) {
            r = builder->CreateCast(Instruction::SIToFP, r, Type::getFloatTy(*theContext));
            return (Value*)builder->CreateFAdd(l, r, "addtmp");
        }
        else if (l->getType()->isFloatTy() && r->getType()->isFloatTy()) {
            return (Value*)builder->CreateFAdd(l, r, "addtmp");
        }
    }
    else if (op == "-") {
        if (l->getType()->isIntegerTy() && r->getType()->isIntegerTy()) {
            return (Value*)builder->CreateSub(l, r, "subtmp");
        }
        else if (l->getType()->isIntegerTy() && r->getType()->isFloatTy()) {
            l = builder->CreateCast(Instruction::SIToFP, l, Type::getFloatTy(*theContext));
            return (Value*)builder->CreateFSub(l, r, "addtmp");
        }
        else if (l->getType()->isFloatTy() && r->getType()->isIntegerTy()) {
            r = builder->CreateCast(Instruction::SIToFP, r, Type::getFloatTy(*theContext));
            return (Value*)builder->CreateFSub(l, r, "addtmp");
        }
        else if (l->getType()->isFloatTy() && r->getType()->isFloatTy()) {
            return (Value*)builder->CreateFSub(l, r, "subtmp");
        }
    }
    return nullptr;
}

std::any LLVMGenerator::visitIntLiteral(KiepskiLangParser::IntLiteralContext* ctx) {
    int intValue = std::stoi(ctx->INT()->getText());

    return (Value*)ConstantInt::get(Type::getInt32Ty(*theContext), intValue, true);
}

std::any LLVMGenerator::visitFloatLiteral(KiepskiLangParser::FloatLiteralContext* ctx) {
    float floatValue = std::stof(ctx->FLOAT()->getText());

    return (Value*)ConstantFP::get(Type::getFloatTy(*theContext), floatValue);
}

std::any LLVMGenerator::visitMulExpr(KiepskiLangParser::MulExprContext* ctx) {
    auto leftexpr = ctx->expr(0);
    auto rightexpr = ctx->expr(1);

    Value* l = std::any_cast<Value*>(visitExpr(leftexpr));
    Value* r = std::any_cast<Value*>(visitExpr(rightexpr));

    if (!l || !r) {
        return nullptr;
    }

    std::string op = ctx->children[1]->getText();
    if (op == "*") {
        if (l->getType()->isIntegerTy() && r->getType()->isIntegerTy()) {
            return (Value*)builder->CreateMul(l, r, "multmp");
        }
        else if (l->getType()->isIntegerTy() && r->getType()->isFloatTy()) {
            l = builder->CreateCast(Instruction::SIToFP, l, Type::getFloatTy(*theContext));
            return (Value*)builder->CreateFMul(l, r, "multmp");
        }
        else if (l->getType()->isFloatTy() && r->getType()->isIntegerTy()) {
            r = builder->CreateCast(Instruction::SIToFP, r, Type::getFloatTy(*theContext));
            return (Value*)builder->CreateFMul(l, r, "multmp");
        }
        else if (l->getType()->isFloatTy() && r->getType()->isFloatTy()) {
            return (Value*)builder->CreateFMul(l, r, "multmp");
        }
    }
    else if (op == "/") {
        if (l->getType()->isIntegerTy() && r->getType()->isIntegerTy()) {
            l = builder->CreateCast(Instruction::SIToFP, l, Type::getFloatTy(*theContext));
            r = builder->CreateCast(Instruction::SIToFP, r, Type::getFloatTy(*theContext));
        }
        else if (l->getType()->isIntegerTy() && r->getType()->isFloatTy()) {
            l = builder->CreateCast(Instruction::SIToFP, l, Type::getFloatTy(*theContext));
        }
        else if (l->getType()->isFloatTy() && r->getType()->isIntegerTy()) {
            r = builder->CreateCast(Instruction::SIToFP, r, Type::getFloatTy(*theContext));
        }
        return (Value*)builder->CreateFDiv(l, r, "divtmp");
    }
    return nullptr;
}

std::any LLVMGenerator::visitBraces(KiepskiLangParser::BracesContext* ctx) {
    return visitExpr(ctx->expr());
}

std::any LLVMGenerator::visitVarReference(KiepskiLangParser::VarReferenceContext* ctx) {
    std::string varName = ctx->ID()->getText();
    
    Value* v = namedValues[varName];
    if (!v) {
        return logErrorV("Unknown variable name: " + varName);
    }

    AllocaInst* allocaInst = dyn_cast<AllocaInst>(v);
    if (allocaInst->getAllocatedType()->isIntegerTy()) {
        return (Value*)builder->CreateLoad(Type::getInt32Ty(*theContext), v, varName + "_val");
    } 
    if (allocaInst->getAllocatedType()->isFloatTy()) {
        return (Value*)builder->CreateLoad(Type::getFloatTy(*theContext), v, varName + "_val");
    }
    return nullptr;
}