
// Generated from KiepskiLang.g4 by ANTLR 4.13.2

#include <limits>
#include "LLVMGenerator.h"
#include <llvm/Support/FileSystem.h>
#include <llvm/Support/raw_ostream.h>

std::unique_ptr<LLVMContext> LLVMGenerator::theContext = std::make_unique<LLVMContext>();

std::unique_ptr<Module> LLVMGenerator::theModule = std::make_unique<Module>("my cool jit", *theContext);

std::unique_ptr<IRBuilder<>> LLVMGenerator::builder = std::make_unique<IRBuilder<>>(*theContext);

std::map<std::string, std::pair<Value*, std::string>> LLVMGenerator::namedValues;

std::map<std::string, int> LLVMGenerator::arraySizes;

std::map<std::string, std::pair<int, int>> LLVMGenerator::matrixSizes;

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
        if (dynamic_cast<KiepskiLangParser::ScalarDeclContext*>(ctx->varDecl())) {
            return visitScalarDecl(dynamic_cast<KiepskiLangParser::ScalarDeclContext*>(ctx->varDecl()));
        }
        if (dynamic_cast<KiepskiLangParser::ArrayDeclContext*>(ctx->varDecl())) {
            return visitArrayDecl(dynamic_cast<KiepskiLangParser::ArrayDeclContext*>(ctx->varDecl()));
        }
        if (dynamic_cast<KiepskiLangParser::MatrixDeclContext*>(ctx->varDecl())) {
            return visitMatrixDecl(dynamic_cast<KiepskiLangParser::MatrixDeclContext*>(ctx->varDecl()));
        }
    }
    if (ctx->varAssign()) {
        if (dynamic_cast<KiepskiLangParser::VariableAssignContext*>(ctx->varAssign())) {
            return visitVariableAssign(dynamic_cast<KiepskiLangParser::VariableAssignContext*>(ctx->varAssign()));
        }
        if (dynamic_cast<KiepskiLangParser::ArrayAssignContext*>(ctx->varAssign())) {
            return visitArrayAssign(dynamic_cast<KiepskiLangParser::ArrayAssignContext*>(ctx->varAssign()));
        }
        if (dynamic_cast<KiepskiLangParser::MatrixAssignContext*>(ctx->varAssign())) {
            return visitMatrixAssign(dynamic_cast<KiepskiLangParser::MatrixAssignContext*>(ctx->varAssign()));
        }
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

std::any LLVMGenerator::visitScalarDecl(KiepskiLangParser::ScalarDeclContext* ctx) {
    Value* evaluatedExpr = std::any_cast<Value*>(visitExpr(ctx->expr()));

    if (!evaluatedExpr) {
        return logErrorV("Blad przy deklaracji zmiennej " + ctx->ID()->getText());
    }

    AllocaInst* allocatedVar = nullptr;
    if (ctx->TYPE()->getText() == "int") {
        allocatedVar = builder->CreateAlloca(Type::getInt32Ty(*theContext), nullptr, ctx->ID()->getText());
        if (evaluatedExpr->getType()->isFloatTy()) {
            evaluatedExpr = builder->CreateCast(Instruction::FPToSI, evaluatedExpr, Type::getInt32Ty(*theContext));
        }
    }
    if (ctx->TYPE()->getText() == "long") {
        allocatedVar = builder->CreateAlloca(Type::getInt64Ty(*theContext), nullptr, ctx->ID()->getText());
        if (evaluatedExpr->getType() == Type::getInt32Ty(*theContext)) {
            evaluatedExpr = builder->CreateSExt(evaluatedExpr, Type::getInt64Ty(*theContext));
        }
    }
    else if (ctx->TYPE()->getText() == "float") {
        allocatedVar = builder->CreateAlloca(Type::getFloatTy(*theContext), nullptr, ctx->ID()->getText());
        if (evaluatedExpr->getType()->isIntegerTy()) {
            evaluatedExpr = builder->CreateCast(Instruction::SIToFP, evaluatedExpr, Type::getFloatTy(*theContext));
        }
    }
    else if (ctx->TYPE()->getText() == "double") {
        allocatedVar = builder->CreateAlloca(Type::getDoubleTy(*theContext), nullptr, ctx->ID()->getText());
        if (evaluatedExpr->getType() == Type::getFloatTy(*theContext)) {
            evaluatedExpr = builder->CreateFPExt(evaluatedExpr, Type::getDoubleTy(*theContext));
        }
    }
    else if (ctx->TYPE()->getText() == "bool") {
        allocatedVar = builder->CreateAlloca(Type::getInt1Ty(*theContext), nullptr, ctx->ID()->getText());
        if (evaluatedExpr->getType() != Type::getInt1Ty(*theContext)) {
            return logErrorV("Niezgodnosc typow w wyrazeniu bool");
        }
    }
    else if (ctx->TYPE()->getText() == "string") {

    }
    namedValues.insert_or_assign(ctx->ID()->getText(), std::make_pair<Value*, std::string>(allocatedVar, ctx->TYPE()->getText()));
    return (Value*)builder->CreateStore(evaluatedExpr, allocatedVar);
}

std::any LLVMGenerator::visitArrayDecl(KiepskiLangParser::ArrayDeclContext* ctx) {
    Value* evaluatedExpr = std::any_cast<Value*>(visitArrayInit(ctx->arrayInit()));

    if (!evaluatedExpr) {
        return logErrorV("Blad przy deklaracji zmiennej " + ctx->ID()->getText());
    }
    Type* arrayType = evaluatedExpr->getType();
    AllocaInst* allocatedVar = builder->CreateAlloca(arrayType, nullptr, ctx->ID()->getText());
    namedValues.insert_or_assign(ctx->ID()->getText(), std::make_pair<Value*, std::string>(allocatedVar, ctx->TYPE()->getText()));
    return (Value*)builder->CreateStore(evaluatedExpr, allocatedVar);
}

std::any LLVMGenerator::visitMatrixDecl(KiepskiLangParser::MatrixDeclContext* ctx) {
    Value* evaluatedExpr = std::any_cast<Value*>(visitMatrixInit(ctx->matrixInit()));

    if (!evaluatedExpr) {
        return logErrorV("Blad przy deklaracji zmiennej " + ctx->ID()->getText());
    }
    Type* matrixType = evaluatedExpr->getType();
    AllocaInst* allocatedVar = builder->CreateAlloca(matrixType, nullptr, ctx->ID()->getText());
    namedValues.insert_or_assign(ctx->ID()->getText(), std::make_pair<Value*, std::string>(allocatedVar, ctx->TYPE()->getText()));
    return (Value*)builder->CreateStore(evaluatedExpr, allocatedVar);
}

std::any LLVMGenerator::visitVariableAssign(KiepskiLangParser::VariableAssignContext* ctx) {
    std::string varName = ctx->ID()->getText();

    Value* allocatedVar = namedValues[varName].first;
    if (!allocatedVar) {
        return logErrorV("Unknown variable name: " + varName);
    }

    Value* evaluatedExpr = std::any_cast<Value*>(visitExpr(ctx->expr()));
    if (!evaluatedExpr) {
        return logErrorV("Blad przy przypisaniu zmiennej " + varName);
    }

    auto* allocaInst = llvm::dyn_cast<llvm::AllocaInst>(allocatedVar);
    if (allocaInst->getAllocatedType() != evaluatedExpr->getType()) {
        return logErrorV("Niezgodnosc typow przy przypisaniu zmiennej  " + varName);
    }
    
    return (Value*)builder->CreateStore(evaluatedExpr, allocatedVar);
}

std::any LLVMGenerator::visitArrayAssign(KiepskiLangParser::ArrayAssignContext* ctx) {
    std::string varName = ctx->ID()->getText();
    Value* allocatedVar = namedValues[varName].first;
    std::string type = namedValues[varName].second;
    if (!allocatedVar) {
        return logErrorV("Unknown variable name: " + varName);
    }
    
    int index = std::stoi(ctx->INT()->getText());
    int arraySize = arraySizes[varName];
    if (index >= arraySize) {
        return logErrorV("Wyjscie poza zakres tablicy");
    }
    Value* evaluatedExpr = std::any_cast<Value*>(visitExpr(ctx->expr()));
    Type* arrayType = nullptr;
    if (type == "int") {
        arrayType = ArrayType::get(Type::getInt32Ty(*theContext), arraySize);
        if (!evaluatedExpr->getType()->isIntegerTy()) return logErrorV("Niezgodnosc typow");
    }
    else if (type == "float") {
        arrayType = ArrayType::get(Type::getFloatTy(*theContext), arraySize);
        if (!evaluatedExpr->getType()->isFloatTy()) return logErrorV("Niezgodnosc typow");
    }

    AllocaInst* allocaInst = dyn_cast<AllocaInst>(allocatedVar);
    Value* array = builder->CreateLoad(allocaInst->getAllocatedType(), allocaInst, "loaded_array");
    Value* ptr = builder->CreateGEP(ArrayType::get(arrayType, arraySize), array, { ConstantInt::get(Type::getInt32Ty(*theContext), 0), builder->getInt32(index) }, "ptr" + std::to_string(index));
    return (Value*)builder->CreateStore(evaluatedExpr, ptr);
}

std::any LLVMGenerator::visitMatrixAssign(KiepskiLangParser::MatrixAssignContext* ctx) {
    std::string varName = ctx->ID()->getText();
    Value* allocatedVar = namedValues[varName].first;
    std::string type = namedValues[varName].second;
    if (!allocatedVar) {
        return logErrorV("Unknown variable name: " + varName);
    }

    auto rowIndex = ctx->INT(0);
    auto colIndex = ctx->INT(1);
    int evaluatedRowIndex = std::stoi(rowIndex->getText());
    int evaluatedColIndex = std::stoi(colIndex->getText());
    std::pair<int, int> matrixSize = matrixSizes[varName];
    if (evaluatedRowIndex >= matrixSize.first || evaluatedColIndex >= matrixSize.second) {
        return logErrorV("Wyjscie poza zakres macierzy");
    }
    Value* evaluatedExpr = std::any_cast<Value*>(visitExpr(ctx->expr()));
    Type* matrixType = nullptr;
    if (type == "int") {
        matrixType = ArrayType::get(ArrayType::get(Type::getInt32Ty(*theContext), matrixSize.second), matrixSize.first);
        if (!evaluatedExpr->getType()->isIntegerTy()) return logErrorV("Niezgodnosc typow");
    }
    else if (type == "float") {
        matrixType = ArrayType::get(ArrayType::get(Type::getFloatTy(*theContext), matrixSize.second), matrixSize.first);
        if (!evaluatedExpr->getType()->isFloatTy()) return logErrorV("Niezgodnosc typow");
    }

    AllocaInst* allocaInst = dyn_cast<AllocaInst>(allocatedVar);
    Value* matrix = builder->CreateLoad(allocaInst->getAllocatedType(), allocaInst, "loaded_matrix");
    Value* ptr = builder->CreateGEP(matrixType, matrix, { ConstantInt::get(Type::getInt32Ty(*theContext), 0), builder->getInt32(evaluatedRowIndex), builder->getInt32(evaluatedColIndex) }, "ptr" + std::to_string(evaluatedRowIndex) + std::to_string(evaluatedColIndex));
    return (Value*)builder->CreateStore(evaluatedExpr, ptr);
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
    if (val->getType() == Type::getInt32Ty(*theContext) || val->getType() == Type::getInt1Ty(*theContext)) {
        formatStr = theModule->getNamedGlobal("intFormat");
        if (!formatStr) {
            formatStr = builder->CreateGlobalStringPtr("%d\n", "intFormat");
        }
        if (val->getType() == Type::getInt1Ty(*theContext)) {
            val = (Value*)builder->CreateZExt(val, Type::getInt32Ty(*theContext), val->getName() + "_ext");
        }
    }
    else if (val->getType() == Type::getInt64Ty(*theContext)) {
        formatStr = theModule->getNamedGlobal("longFormat");
        if (!formatStr) {
            formatStr = builder->CreateGlobalStringPtr("%lld\n", "longFormat");
        }
    }
    else if (val->getType()->isFloatingPointTy()) {
        if (val->getType() == Type::getFloatTy(*theContext)) {
            val = builder->CreateFPExt(val, Type::getDoubleTy(*theContext), val->getName() + "_double");
        }
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

    Value* v = namedValues[varName].first;
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
    else if (dynamic_cast<KiepskiLangParser::ComparisonExprContext*>(ctx)) {
        return visitComparisonExpr(dynamic_cast<KiepskiLangParser::ComparisonExprContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::LogicBinaryExprContext*>(ctx)) {
        return visitLogicBinaryExpr(dynamic_cast<KiepskiLangParser::LogicBinaryExprContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::LogicNegExprContext*>(ctx)) {
        return visitLogicNegExpr(dynamic_cast<KiepskiLangParser::LogicNegExprContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::IntLiteralContext*>(ctx)) {
        return visitIntLiteral(dynamic_cast<KiepskiLangParser::IntLiteralContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::FloatLiteralContext*>(ctx)) {
        return visitFloatLiteral(dynamic_cast<KiepskiLangParser::FloatLiteralContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::BoolLiteralContext*>(ctx)) {
        return visitBoolLiteral(dynamic_cast<KiepskiLangParser::BoolLiteralContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::StringLiteralContext*>(ctx)) {
        return visitStringLiteral(dynamic_cast<KiepskiLangParser::StringLiteralContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::VarReferenceContext*>(ctx)) {
        return visitVarReference(dynamic_cast<KiepskiLangParser::VarReferenceContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::BracesContext*>(ctx)) {
        return visitBraces(dynamic_cast<KiepskiLangParser::BracesContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::ArrayAccessExprContext*>(ctx)) {
        return visitArrayAccessExpr(dynamic_cast<KiepskiLangParser::ArrayAccessExprContext*>(ctx));
    }
    else if (dynamic_cast<KiepskiLangParser::MatrixAccessExprContext*>(ctx)) {
        return visitMatrixAccessExpr(dynamic_cast<KiepskiLangParser::MatrixAccessExprContext*>(ctx));
    }
    return nullptr;
}

std::any LLVMGenerator::visitLogicBinaryExpr(KiepskiLangParser::LogicBinaryExprContext* ctx) {
    auto leftexpr = ctx->expr(0);
    auto rightexpr = ctx->expr(1);

    Function* currFunc = builder->GetInsertBlock()->getParent();
    BasicBlock* evallexpr = BasicBlock::Create(*theContext, "eval_lexpr", currFunc);
    BasicBlock* evalrexpr = BasicBlock::Create(*theContext, "eval_rexpr", currFunc);
    BasicBlock* merge = BasicBlock::Create(*theContext, "merge", currFunc);

    Value* l = std::any_cast<Value*>(visitExpr(leftexpr));
    if (!l) return nullptr;


    Value* r = nullptr;
    PHINode* phi = nullptr;

    std::string op = ctx->children[1]->getText();
    if (op == "AND") {
        builder->CreateCondBr(l, evalrexpr, evallexpr);

        builder->SetInsertPoint(evallexpr);
        builder->CreateBr(merge);

        builder->SetInsertPoint(evalrexpr);
        r = std::any_cast<Value*>(visitExpr(rightexpr));
        if (!r) return nullptr;
        builder->CreateBr(merge);

        builder->SetInsertPoint(merge);
        phi = builder->CreatePHI(Type::getInt1Ty(*theContext), 2, "andtmp");
        phi->addIncoming(ConstantInt::getFalse(*theContext), evallexpr);
        phi->addIncoming(r, evalrexpr);
        return (Value*)phi;
    }
    if (op == "OR") {
        builder->CreateCondBr(l, evallexpr, evalrexpr);

        builder->SetInsertPoint(evallexpr);
        builder->CreateBr(merge);

        builder->SetInsertPoint(evalrexpr);
        r = std::any_cast<Value*>(visitExpr(rightexpr));
        if (!r) return nullptr;
        builder->CreateBr(merge);

        builder->SetInsertPoint(merge);
        phi = builder->CreatePHI(Type::getInt1Ty(*theContext), 2, "ortmp");
        phi->addIncoming(ConstantInt::getTrue(*theContext), evallexpr);
        phi->addIncoming(r, evalrexpr);
        return (Value*)phi;
    }
    if (op == "XOR") {
        r = std::any_cast<Value*>(visitExpr(rightexpr));
        if (!r) return nullptr;
        return (Value*)builder->CreateXor(l, r, "xortmp");
    }
    return nullptr;
}

std::any LLVMGenerator::visitArrayAccessExpr(KiepskiLangParser::ArrayAccessExprContext* ctx) {
    auto index = ctx->INT();
    int evaluatedIndex = std::stoi(index->getText());
    std::string varName = ctx->ID()->getText();
    Value* v = namedValues[varName].first;
    std::string typeStr = namedValues[varName].second;
    if (!v) {
        return logErrorV("Unknown variable name: " + varName);
    }

    int arraySize = arraySizes[varName];
    if (evaluatedIndex >= arraySize) {
        return logErrorV("Wyjscie poza zakres tablicy");
    }
    Type* type = nullptr;
    Type* arrayType = nullptr;
    if (typeStr == "int") {
        type = Type::getInt32Ty(*theContext);
        arrayType = ArrayType::get(type, arraySize);
    }
    else if (typeStr == "float") {
        type = Type::getFloatTy(*theContext);
        arrayType = ArrayType::get(type, arraySize);
    }
    AllocaInst* allocaInst = dyn_cast<AllocaInst>(v);
    Value* array = builder->CreateLoad(allocaInst->getAllocatedType(), allocaInst, "loaded_array");
    Value* element = builder->CreateInBoundsGEP(arrayType, array, { builder->getInt32(0), builder->getInt32(evaluatedIndex) }, "array_elem_ptr");
    return (Value*)builder->CreateLoad(type, element, "array_elem");
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
            if (l->getType() == Type::getInt32Ty(*theContext) && r->getType() == Type::getInt64Ty(*theContext)) {
                l = builder->CreateSExt(l, Type::getInt64Ty(*theContext));
            }
            else if (l->getType() == Type::getInt64Ty(*theContext) && r->getType() == Type::getInt32Ty(*theContext)) {
                r = builder->CreateSExt(r, Type::getInt64Ty(*theContext));
            }
            return (Value*)builder->CreateAdd(l, r, "addtmp");
        }
        else if (l->getType()->isIntegerTy() && r->getType()->isFloatingPointTy()) {
            if (r->getType() == Type::getFloatTy(*theContext)) {
                l = builder->CreateCast(Instruction::SIToFP, l, Type::getFloatTy(*theContext));
            }
            else {
                l = builder->CreateCast(Instruction::SIToFP, l, Type::getDoubleTy(*theContext));
            }   
            return (Value*)builder->CreateFAdd(l, r, "addtmp");
        }
        else if (l->getType()->isFloatingPointTy() && r->getType()->isIntegerTy()) {
            if (l->getType() == Type::getFloatTy(*theContext)) {
                r = builder->CreateCast(Instruction::SIToFP, r, Type::getFloatTy(*theContext));
            }
            else {
                r = builder->CreateCast(Instruction::SIToFP, r, Type::getDoubleTy(*theContext));
            }
            return (Value*)builder->CreateFAdd(l, r, "addtmp");
        }
        else if (l->getType()->isFloatingPointTy() && r->getType()->isFloatingPointTy()) {
            if (l->getType() == Type::getFloatTy(*theContext) && r->getType() == Type::getDoubleTy(*theContext)) {
                l = builder->CreateFPExt(l, Type::getDoubleTy(*theContext));
            }
            else if (l->getType() == Type::getDoubleTy(*theContext) && r->getType() == Type::getFloatTy(*theContext)) {
                r = builder->CreateFPExt(r, Type::getDoubleTy(*theContext));
            }
            return (Value*)builder->CreateFAdd(l, r, "addtmp");
        }
    }
    else if (op == "-") {
        if (l->getType()->isIntegerTy() && r->getType()->isIntegerTy()) {
            if (l->getType() == Type::getInt32Ty(*theContext) && r->getType() == Type::getInt64Ty(*theContext)) {
                l = builder->CreateSExt(l, Type::getInt64Ty(*theContext));
            }
            else if (l->getType() == Type::getInt64Ty(*theContext) && r->getType() == Type::getInt32Ty(*theContext)) {
                r = builder->CreateSExt(r, Type::getInt64Ty(*theContext));
            }
            return (Value*)builder->CreateSub(l, r, "subtmp");
        }
        else if (l->getType()->isIntegerTy() && r->getType()->isFloatingPointTy()) {
            if (r->getType() == Type::getFloatTy(*theContext)) {
                l = builder->CreateCast(Instruction::SIToFP, l, Type::getFloatTy(*theContext));
            }
            else {
                l = builder->CreateCast(Instruction::SIToFP, l, Type::getDoubleTy(*theContext));
            }
            return (Value*)builder->CreateFSub(l, r, "addtmp");
        }
        else if (l->getType()->isFloatingPointTy() && r->getType()->isIntegerTy()) {
            if (l->getType() == Type::getFloatTy(*theContext)) {
                r = builder->CreateCast(Instruction::SIToFP, r, Type::getFloatTy(*theContext));
            }
            else {
                r = builder->CreateCast(Instruction::SIToFP, r, Type::getDoubleTy(*theContext));
            }
            return (Value*)builder->CreateFSub(l, r, "addtmp");
        }
        else if (l->getType()->isFloatingPointTy() && r->getType()->isFloatingPointTy()) {
            if (l->getType() == Type::getFloatTy(*theContext) && r->getType() == Type::getDoubleTy(*theContext)) {
                l = builder->CreateFPExt(l, Type::getDoubleTy(*theContext));
            }
            else if (l->getType() == Type::getDoubleTy(*theContext) && r->getType() == Type::getFloatTy(*theContext)) {
                r = builder->CreateFPExt(r, Type::getDoubleTy(*theContext));
            }
            return (Value*)builder->CreateFSub(l, r, "subtmp");
        }
    }
    return nullptr;
}

std::any LLVMGenerator::visitIntLiteral(KiepskiLangParser::IntLiteralContext* ctx) {
    long long intValue = std::stoll(ctx->INT()->getText());
    if (intValue >= INT_MIN && intValue <= INT_MAX) {
        return (Value*)ConstantInt::get(Type::getInt32Ty(*theContext), intValue, true);
    }
    return (Value*)ConstantInt::get(Type::getInt64Ty(*theContext), intValue, true);
}

std::any LLVMGenerator::visitComparisonExpr(KiepskiLangParser::ComparisonExprContext* ctx) {
    return nullptr;
}

std::any LLVMGenerator::visitBoolLiteral(KiepskiLangParser::BoolLiteralContext* ctx) {
    std::string boolValueStr = ctx->BOOL()->getText();
    if (boolValueStr != "true" && boolValueStr != "false") {
        return logErrorV("Nieprawidlowa wartosc logiczna");
    }
    int boolValue = boolValueStr == "true" ? 1 : 0;

    return (Value*)ConstantInt::get(Type::getInt1Ty(*theContext), boolValue);
}

std::any LLVMGenerator::visitFloatLiteral(KiepskiLangParser::FloatLiteralContext* ctx) {
    double floatValue = std::stod(ctx->FLOAT()->getText());
    if (floatValue <= std::numeric_limits<float>::max() && floatValue >= std::numeric_limits<float>::lowest()) {
        return (Value*)ConstantFP::get(Type::getFloatTy(*theContext), floatValue);
    }

    return (Value*)ConstantFP::get(Type::getDoubleTy(*theContext), floatValue);
}

std::any LLVMGenerator::visitMatrixAccessExpr(KiepskiLangParser::MatrixAccessExprContext* ctx) {
    auto rowIndex = ctx->INT(0);
    auto colIndex = ctx->INT(1);
    int evaluatedRowIndex = std::stoi(rowIndex->getText());
    int evaluatedColIndex = std::stoi(colIndex->getText());
    std::string varName = ctx->ID()->getText();
    Value* v = namedValues[varName].first;
    std::string typeStr = namedValues[varName].second;
    if (!v) {
        return logErrorV("Unknown variable name: " + varName);
    }

    std::pair<int, int> matrixSize = matrixSizes[varName];
    if (evaluatedRowIndex >= matrixSize.first || evaluatedColIndex >= matrixSize.second) {
        return logErrorV("Wyjscie poza zakres macierzy");
    }
    Type* type = nullptr;
    if (typeStr == "int") {
        type = Type::getInt32Ty(*theContext);
    }
    else if (typeStr == "float") {
        type = Type::getFloatTy(*theContext);
    }
    Type* matrixType = ArrayType::get(ArrayType::get(type, matrixSize.second), matrixSize.first);
    AllocaInst* allocaInst = dyn_cast<AllocaInst>(v);
    int offset = (matrixSize.first == 3 && matrixSize.second == 3) ? 3 : 2;
    Value* element = builder->CreateGEP(matrixType, allocaInst, { builder->getInt32(0), builder->getInt32(evaluatedRowIndex), builder->getInt32(evaluatedColIndex+offset)}, "array_elem_ptr");
    return (Value*)builder->CreateLoad(type, element, "array_elem");
}

std::any LLVMGenerator::visitStringLiteral(KiepskiLangParser::StringLiteralContext* ctx) {
    std::string strValue = ctx->STRING()->getText();
    strValue = strValue.substr(1, strValue.size() - 2);

    return strValue;
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
            if (l->getType() == Type::getInt32Ty(*theContext) && r->getType() == Type::getInt64Ty(*theContext)) {
                l = builder->CreateSExt(l, Type::getInt64Ty(*theContext));
            }
            else if (l->getType() == Type::getInt64Ty(*theContext) && r->getType() == Type::getInt32Ty(*theContext)) {
                r = builder->CreateSExt(r, Type::getInt64Ty(*theContext));
            }
            return (Value*)builder->CreateMul(l, r, "multmp");
        }
        else if (l->getType()->isIntegerTy() && r->getType()->isFloatingPointTy()) {
            if (r->getType() == Type::getFloatTy(*theContext)) {
                l = builder->CreateCast(Instruction::SIToFP, l, Type::getFloatTy(*theContext));
            }
            else {
                l = builder->CreateCast(Instruction::SIToFP, l, Type::getDoubleTy(*theContext));
            }            
            return (Value*)builder->CreateFMul(l, r, "multmp");
        }
        else if (l->getType()->isFloatingPointTy() && r->getType()->isIntegerTy()) {
            if (l->getType() == Type::getFloatTy(*theContext)) {
                r = builder->CreateCast(Instruction::SIToFP, r, Type::getFloatTy(*theContext));
            }
            else {
                r = builder->CreateCast(Instruction::SIToFP, r, Type::getDoubleTy(*theContext));
            }            
            return (Value*)builder->CreateFMul(l, r, "multmp");
        }
        else if (l->getType()->isFloatingPointTy() && r->getType()->isFloatingPointTy()) {
            if (l->getType() == Type::getFloatTy(*theContext) && r->getType() == Type::getDoubleTy(*theContext)) {
                l = builder->CreateFPExt(l, Type::getDoubleTy(*theContext));
            }
            else if (l->getType() == Type::getDoubleTy(*theContext) && r->getType() == Type::getFloatTy(*theContext)) {
                r = builder->CreateFPExt(r, Type::getDoubleTy(*theContext));
            }
            return (Value*)builder->CreateFMul(l, r, "multmp");
        }
    }
    else if (op == "/") {
        if (l->getType()->isIntegerTy() && r->getType()->isIntegerTy()) {
            l = builder->CreateCast(Instruction::SIToFP, l, Type::getFloatTy(*theContext));
            r = builder->CreateCast(Instruction::SIToFP, r, Type::getFloatTy(*theContext));
        }
        else if (l->getType()->isIntegerTy() && r->getType()->isFloatingPointTy()) {
            if (r->getType() == Type::getFloatTy(*theContext)) {
                l = builder->CreateCast(Instruction::SIToFP, l, Type::getFloatTy(*theContext));
            }
            else {
                l = builder->CreateCast(Instruction::SIToFP, l, Type::getDoubleTy(*theContext));
            }
        }
        else if (l->getType()->isFloatingPointTy() && r->getType()->isIntegerTy()) {
            if (l->getType() == Type::getFloatTy(*theContext)) {
                r = builder->CreateCast(Instruction::SIToFP, r, Type::getFloatTy(*theContext));
            }
            else {
                r = builder->CreateCast(Instruction::SIToFP, r, Type::getDoubleTy(*theContext));
            }
        }
        else if (l->getType()->isFloatingPointTy() && r->getType()->isFloatingPointTy()) {
            if (l->getType() == Type::getFloatTy(*theContext) && r->getType() == Type::getDoubleTy(*theContext)) {
                l = builder->CreateFPExt(l, Type::getDoubleTy(*theContext));
            }
            else if (l->getType() == Type::getDoubleTy(*theContext) && r->getType() == Type::getFloatTy(*theContext)) {
                r = builder->CreateFPExt(r, Type::getDoubleTy(*theContext));
            }
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
    
    Value* v = namedValues[varName].first;
    if (!v) {
        return logErrorV("Unknown variable name: " + varName);
    }

    AllocaInst* allocaInst = dyn_cast<AllocaInst>(v);
    if (allocaInst->getAllocatedType() == Type::getInt32Ty(*theContext)) {
        return (Value*)builder->CreateLoad(Type::getInt32Ty(*theContext), v, varName + "_val");
    }
    if (allocaInst->getAllocatedType() == Type::getFloatTy(*theContext)) {
        return (Value*)builder->CreateLoad(Type::getFloatTy(*theContext), v, varName + "_val");
    }
    if (allocaInst->getAllocatedType() == Type::getInt1Ty(*theContext)) {
        return (Value*)builder->CreateLoad(Type::getInt1Ty(*theContext), v, varName + "_val");
    }
    if (allocaInst->getAllocatedType() == Type::getInt64Ty(*theContext)) {
        return (Value*)builder->CreateLoad(Type::getInt64Ty(*theContext), v, varName + "_val");
    }
    if (allocaInst->getAllocatedType() == Type::getDoubleTy(*theContext)) {
        return (Value*)builder->CreateLoad(Type::getDoubleTy(*theContext), v, varName + "_val");
    }
    if (allocaInst->getAllocatedType()->isArrayTy()) {
        return (Value*)builder->CreateBitCast(v, allocaInst->getAllocatedType()->getArrayElementType()->getPointerTo(), varName + "_ptr");
    }
    return nullptr;
}

std::any LLVMGenerator::visitLogicNegExpr(KiepskiLangParser::LogicNegExprContext* ctx) {
    Value* evaluatedExpr = std::any_cast<Value*>(visitExpr(ctx->expr()));
    if (!evaluatedExpr) return nullptr;

    return (Value*)builder->CreateXor(evaluatedExpr, 1, "negtmp");
}

std::any LLVMGenerator::visitArrayInit(KiepskiLangParser::ArrayInitContext* ctx) {
    std::string typeName = "";
    if (auto varDeclCtx = dynamic_cast<KiepskiLangParser::ArrayDeclContext*>(ctx->parent)) {
        typeName = varDeclCtx->TYPE()->getText();
        std::vector<Value*> arrayValues;
        auto exprs = ctx->expr();

        for (auto* expr : exprs) {
            Value* evaluatedExpr = std::any_cast<Value*>(visitExpr(expr));
            if (!evaluatedExpr) continue;
            arrayValues.push_back(evaluatedExpr);
        }

        if (arrayValues.size() == 0) return nullptr;
        Type* arrayType = nullptr;
        if (typeName == "int") {
            arrayType = Type::getInt32Ty(*theContext);
        }
        else if (typeName == "long") {
            arrayType = Type::getInt64Ty(*theContext);
        }
        else if (typeName == "float") {
            arrayType = Type::getFloatTy(*theContext);
        }
        else if (typeName == "double") {
            arrayType = Type::getDoubleTy(*theContext);
        }
        else {
            logErrorV("Niezgodny typ");
            return nullptr;
        }

        Value* arraySize = builder->getInt32(arrayValues.size());
        Value* arrayMem = builder->CreateAlloca(ArrayType::get(arrayType, arrayValues.size()), nullptr, "array");
        for (int i = 0; i < arrayValues.size(); i++) {
            Value* index = builder->getInt32(i);
            Value* ptr = builder->CreateGEP(ArrayType::get(arrayType, arrayValues.size()), arrayMem, { ConstantInt::get(Type::getInt32Ty(*theContext), 0), index }, "ptr" + std::to_string(i));
            builder->CreateStore(arrayValues[i], ptr);
        }
        arraySizes.insert_or_assign(varDeclCtx->ID()->getText(), arrayValues.size());
        return arrayMem;
    }
    return nullptr;
}

std::any LLVMGenerator::visitMatrixInit(KiepskiLangParser::MatrixInitContext* ctx) {
    std::string typeName = "";
    if (auto varDeclCtx = dynamic_cast<KiepskiLangParser::MatrixDeclContext*>(ctx->parent)) {
        typeName = varDeclCtx->TYPE()->getText();
        std::vector<std::vector<Value*>> matrixValues;
        auto arrays = ctx->arrayInit();
        int rowLength = 0;

        for (auto* array : arrays) {
            auto elementsInRow = array->expr();
            if (rowLength != 0) {
                if (elementsInRow.size() != rowLength) {
                    logErrorV("Tablice w macierzy nie są tego samego rozmiaru");
                    return nullptr;
                }
            }
            else {
                rowLength = elementsInRow.size();
            }

            auto exprs = array->expr();

            std::vector<Value*> arrayValues;
            for (auto* expr : exprs) {
                Value* evaluatedExpr = std::any_cast<Value*>(visitExpr(expr));
                if (!evaluatedExpr) continue;
                arrayValues.push_back(evaluatedExpr);
            }
            matrixValues.push_back(arrayValues);
        }

        if (matrixValues.size() == 0) return nullptr;
        Type* matrixType = nullptr;
        if (typeName == "int") {
            matrixType = Type::getInt32Ty(*theContext);
        }
        else if (typeName == "long") {
            matrixType = Type::getInt64Ty(*theContext);
        }
        else if (typeName == "float") {
            matrixType = Type::getFloatTy(*theContext);
        }
        else if (typeName == "double") {
            matrixType = Type::getDoubleTy(*theContext);
        }
        else {
            logErrorV("Niezgodny typ");
            return nullptr;
        }

        Value* matrixSize = builder->getInt32(matrixValues.size());
        Value* matrixMem = builder->CreateAlloca(ArrayType::get(ArrayType::get(matrixType, rowLength), matrixValues.size()), nullptr, "matrix");
        for (int i = 0; i < matrixValues.size(); i++) {
            for (int j = 0; j < rowLength; j++) {
                Value* rowIndex = builder->getInt32(i);
                Value* colIndex = builder->getInt32(j);
                Value* ptr = builder->CreateGEP(ArrayType::get(ArrayType::get(matrixType, rowLength), matrixValues.size()), matrixMem, { ConstantInt::get(Type::getInt32Ty(*theContext), 0), rowIndex, colIndex }, "ptr" + std::to_string(i) + std::to_string(j));
                builder->CreateStore(matrixValues[i][j], ptr);
            }
        }
        matrixSizes.insert_or_assign(varDeclCtx->ID()->getText(), std::make_pair(matrixValues.size(), rowLength));
        return matrixMem;
    }
    return nullptr;
}