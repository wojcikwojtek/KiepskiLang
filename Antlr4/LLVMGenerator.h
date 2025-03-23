
// Generated from KiepskiLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "KiepskiLangVisitor.h"
#include <memory>
#include <map>
#include <string>
#include "llvm/IR/LLVMContext.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/IRBuilder.h"

using namespace llvm;

/**
 * This class provides an empty implementation of KiepskiLangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LLVMGenerator : public KiepskiLangVisitor {
private:
    static std::unique_ptr<LLVMContext> theContext;
    static std::unique_ptr<IRBuilder<>> builder;
    static std::unique_ptr<Module> theModule;
    static std::map<std::string, Value*> namedValues;
    Value* logErrorV(std::string str);
public:

    virtual std::any visitProgram(KiepskiLangParser::ProgramContext* ctx) override;

    virtual std::any visitStart(KiepskiLangParser::StartContext* ctx) override;

    virtual std::any visitStatement(KiepskiLangParser::StatementContext* ctx) override;

    virtual std::any visitVarDecl(KiepskiLangParser::VarDeclContext* ctx) override;

    virtual std::any visitPrint(KiepskiLangParser::PrintContext* ctx) override;

    virtual std::any visitRead(KiepskiLangParser::ReadContext* ctx) override;

    virtual std::any visitAddExpr(KiepskiLangParser::AddExprContext* ctx) override;

    virtual std::any visitIntLiteral(KiepskiLangParser::IntLiteralContext* ctx) override;

    virtual std::any visitMulExpr(KiepskiLangParser::MulExprContext* ctx) override;

    virtual std::any visitBraces(KiepskiLangParser::BracesContext* ctx) override;

    virtual std::any visitVarReference(KiepskiLangParser::VarReferenceContext* ctx) override;

    std::any visitExpr(KiepskiLangParser::ExprContext* ctx);
};

