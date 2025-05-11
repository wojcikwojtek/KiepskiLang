
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

class CompilationException : public std::exception {
public:
    std::string what() {
        return "Compilation Error";
    }
};

/**
 * This class provides an empty implementation of KiepskiLangVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LLVMGenerator : public KiepskiLangVisitor {
private:
    static std::unique_ptr<LLVMContext> theContext;
    static std::unique_ptr<IRBuilder<>> builder;
    static std::unique_ptr<Module> theModule;
    static std::map<std::string, std::pair<Value*, std::string>> namedValues;
    static std::map<std::string, std::pair<Value*, std::string>> globalValues;
    static std::map<std::string, std::vector<std::pair<std::string, std::string>>> structs;
    static std::map<std::string, std::vector<std::pair<std::string, std::string>>> declaredMethods;
    static std::vector<std::string> currentClass;
    static std::map<std::string, int> arraySizes;
    static std::map<std::string, std::pair<int, int>> matrixSizes;
    Value* logErrorV(std::string str);
public:

    virtual std::any visitProgram(KiepskiLangParser::ProgramContext* ctx) override;

    virtual std::any visitFunctionDecl(KiepskiLangParser::FunctionDeclContext* ctx) override;

    virtual std::any visitParamList(KiepskiLangParser::ParamListContext* ctx) override;

    virtual std::any visitReturnStatement(KiepskiLangParser::ReturnStatementContext* ctx) override;

    virtual std::any visitGlobalVarDecl(KiepskiLangParser::GlobalVarDeclContext* ctx) override;

    virtual std::any visitStructDecl(KiepskiLangParser::StructDeclContext* ctx) override;

    virtual std::any visitClassDecl(KiepskiLangParser::ClassDeclContext* ctx) override;

    virtual std::any visitClassField(KiepskiLangParser::ClassFieldContext* ctx) override;

    virtual std::any visitClassMethod(KiepskiLangParser::ClassMethodContext* ctx) override;

    virtual std::any visitVarInit(KiepskiLangParser::VarInitContext* ctx) override;

    virtual std::any visitStart(KiepskiLangParser::StartContext* ctx) override;

    virtual std::any visitStatement(KiepskiLangParser::StatementContext* ctx) override;

    virtual std::any visitScalarDecl(KiepskiLangParser::ScalarDeclContext* ctx) override;

    virtual std::any visitObjectInstanceDecl(KiepskiLangParser::ObjectInstanceDeclContext* ctx) override;

    virtual std::any visitArrayDecl(KiepskiLangParser::ArrayDeclContext* ctx) override;

    virtual std::any visitMatrixDecl(KiepskiLangParser::MatrixDeclContext* ctx) override;

    virtual std::any visitVariableAssign(KiepskiLangParser::VariableAssignContext* ctx) override;

    virtual std::any visitFieldAssign(KiepskiLangParser::FieldAssignContext* ctx) override;

    virtual std::any visitArrayAssign(KiepskiLangParser::ArrayAssignContext* ctx) override;

    virtual std::any visitMatrixAssign(KiepskiLangParser::MatrixAssignContext* ctx) override;

    virtual std::any visitPrint(KiepskiLangParser::PrintContext* ctx) override;

    virtual std::any visitRead(KiepskiLangParser::ReadContext* ctx) override;

    virtual std::any visitIfStatement(KiepskiLangParser::IfStatementContext* ctx) override;

    virtual std::any visitElseBlock(KiepskiLangParser::ElseBlockContext* ctx) override;

    virtual std::any visitWhileStatement(KiepskiLangParser::WhileStatementContext* ctx) override;

    virtual std::any visitFieldAccessExpr(KiepskiLangParser::FieldAccessExprContext* ctx) override;

    virtual std::any visitLogicBinaryExpr(KiepskiLangParser::LogicBinaryExprContext* ctx) override;

    virtual std::any visitArrayAccessExpr(KiepskiLangParser::ArrayAccessExprContext* ctx) override;

    virtual std::any visitAddExpr(KiepskiLangParser::AddExprContext* ctx) override;

    virtual std::any visitFunctionCallExpr(KiepskiLangParser::FunctionCallExprContext* ctx) override;

    virtual std::any visitIntLiteral(KiepskiLangParser::IntLiteralContext* ctx) override;

    virtual std::any visitComparisonExpr(KiepskiLangParser::ComparisonExprContext* ctx) override;

    virtual std::any visitBoolLiteral(KiepskiLangParser::BoolLiteralContext* ctx) override;

    virtual std::any visitFloatLiteral(KiepskiLangParser::FloatLiteralContext* ctx) override;

    virtual std::any visitMatrixAccessExpr(KiepskiLangParser::MatrixAccessExprContext* ctx) override;

    virtual std::any visitStringLiteral(KiepskiLangParser::StringLiteralContext* ctx) override;

    virtual std::any visitMulExpr(KiepskiLangParser::MulExprContext* ctx) override;

    virtual std::any visitBraces(KiepskiLangParser::BracesContext* ctx) override;

    virtual std::any visitVarReference(KiepskiLangParser::VarReferenceContext* ctx) override;

    virtual std::any visitMethodCallExpr(KiepskiLangParser::MethodCallExprContext* ctx) override;

    virtual std::any visitLogicNegExpr(KiepskiLangParser::LogicNegExprContext* ctx) override;

    virtual std::any visitArrayInit(KiepskiLangParser::ArrayInitContext* ctx) override;

    virtual std::any visitMatrixInit(KiepskiLangParser::MatrixInitContext* ctx) override;

    virtual std::any visitFunctionCall(KiepskiLangParser::FunctionCallContext* ctx) override;

    virtual std::any visitArgList(KiepskiLangParser::ArgListContext* ctx) override;

    std::any visitExpr(KiepskiLangParser::ExprContext* ctx);
};

