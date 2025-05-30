
// Generated from KiepskiLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "KiepskiLangParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by KiepskiLangParser.
 */
class  KiepskiLangVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by KiepskiLangParser.
   */
    virtual std::any visitProgram(KiepskiLangParser::ProgramContext *context) = 0;

    virtual std::any visitFunctionDecl(KiepskiLangParser::FunctionDeclContext *context) = 0;

    virtual std::any visitGlobalVarDecl(KiepskiLangParser::GlobalVarDeclContext *context) = 0;

    virtual std::any visitStructDecl(KiepskiLangParser::StructDeclContext *context) = 0;

    virtual std::any visitClassDecl(KiepskiLangParser::ClassDeclContext *context) = 0;

    virtual std::any visitClassField(KiepskiLangParser::ClassFieldContext *context) = 0;

    virtual std::any visitClassMethod(KiepskiLangParser::ClassMethodContext *context) = 0;

    virtual std::any visitVarInit(KiepskiLangParser::VarInitContext *context) = 0;

    virtual std::any visitParamList(KiepskiLangParser::ParamListContext *context) = 0;

    virtual std::any visitReturnStatement(KiepskiLangParser::ReturnStatementContext *context) = 0;

    virtual std::any visitStart(KiepskiLangParser::StartContext *context) = 0;

    virtual std::any visitStatement(KiepskiLangParser::StatementContext *context) = 0;

    virtual std::any visitScalarDecl(KiepskiLangParser::ScalarDeclContext *context) = 0;

    virtual std::any visitObjectInstanceDecl(KiepskiLangParser::ObjectInstanceDeclContext *context) = 0;

    virtual std::any visitArrayDecl(KiepskiLangParser::ArrayDeclContext *context) = 0;

    virtual std::any visitMatrixDecl(KiepskiLangParser::MatrixDeclContext *context) = 0;

    virtual std::any visitVariableAssign(KiepskiLangParser::VariableAssignContext *context) = 0;

    virtual std::any visitFieldAssign(KiepskiLangParser::FieldAssignContext *context) = 0;

    virtual std::any visitArrayAssign(KiepskiLangParser::ArrayAssignContext *context) = 0;

    virtual std::any visitMatrixAssign(KiepskiLangParser::MatrixAssignContext *context) = 0;

    virtual std::any visitPrint(KiepskiLangParser::PrintContext *context) = 0;

    virtual std::any visitRead(KiepskiLangParser::ReadContext *context) = 0;

    virtual std::any visitIfStatement(KiepskiLangParser::IfStatementContext *context) = 0;

    virtual std::any visitElseBlock(KiepskiLangParser::ElseBlockContext *context) = 0;

    virtual std::any visitWhileStatement(KiepskiLangParser::WhileStatementContext *context) = 0;

    virtual std::any visitFieldAccessExpr(KiepskiLangParser::FieldAccessExprContext *context) = 0;

    virtual std::any visitLogicBinaryExpr(KiepskiLangParser::LogicBinaryExprContext *context) = 0;

    virtual std::any visitIntLiteral(KiepskiLangParser::IntLiteralContext *context) = 0;

    virtual std::any visitComparisonExpr(KiepskiLangParser::ComparisonExprContext *context) = 0;

    virtual std::any visitBoolLiteral(KiepskiLangParser::BoolLiteralContext *context) = 0;

    virtual std::any visitBraces(KiepskiLangParser::BracesContext *context) = 0;

    virtual std::any visitVarReference(KiepskiLangParser::VarReferenceContext *context) = 0;

    virtual std::any visitMethodCallExpr(KiepskiLangParser::MethodCallExprContext *context) = 0;

    virtual std::any visitArrayAccessExpr(KiepskiLangParser::ArrayAccessExprContext *context) = 0;

    virtual std::any visitStringLiteral(KiepskiLangParser::StringLiteralContext *context) = 0;

    virtual std::any visitAddExpr(KiepskiLangParser::AddExprContext *context) = 0;

    virtual std::any visitFunctionCallExpr(KiepskiLangParser::FunctionCallExprContext *context) = 0;

    virtual std::any visitMulExpr(KiepskiLangParser::MulExprContext *context) = 0;

    virtual std::any visitFloatLiteral(KiepskiLangParser::FloatLiteralContext *context) = 0;

    virtual std::any visitMatrixAccessExpr(KiepskiLangParser::MatrixAccessExprContext *context) = 0;

    virtual std::any visitLogicNegExpr(KiepskiLangParser::LogicNegExprContext *context) = 0;

    virtual std::any visitArrayInit(KiepskiLangParser::ArrayInitContext *context) = 0;

    virtual std::any visitMatrixInit(KiepskiLangParser::MatrixInitContext *context) = 0;

    virtual std::any visitFunctionCall(KiepskiLangParser::FunctionCallContext *context) = 0;

    virtual std::any visitArgList(KiepskiLangParser::ArgListContext *context) = 0;


};

