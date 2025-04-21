
// Generated from KiepskiLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "KiepskiLangParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by KiepskiLangParser.
 */
class  KiepskiLangListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(KiepskiLangParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(KiepskiLangParser::ProgramContext *ctx) = 0;

  virtual void enterStart(KiepskiLangParser::StartContext *ctx) = 0;
  virtual void exitStart(KiepskiLangParser::StartContext *ctx) = 0;

  virtual void enterStatement(KiepskiLangParser::StatementContext *ctx) = 0;
  virtual void exitStatement(KiepskiLangParser::StatementContext *ctx) = 0;

  virtual void enterScalarDecl(KiepskiLangParser::ScalarDeclContext *ctx) = 0;
  virtual void exitScalarDecl(KiepskiLangParser::ScalarDeclContext *ctx) = 0;

  virtual void enterArrayDecl(KiepskiLangParser::ArrayDeclContext *ctx) = 0;
  virtual void exitArrayDecl(KiepskiLangParser::ArrayDeclContext *ctx) = 0;

  virtual void enterMatrixDecl(KiepskiLangParser::MatrixDeclContext *ctx) = 0;
  virtual void exitMatrixDecl(KiepskiLangParser::MatrixDeclContext *ctx) = 0;

  virtual void enterVariableAssign(KiepskiLangParser::VariableAssignContext *ctx) = 0;
  virtual void exitVariableAssign(KiepskiLangParser::VariableAssignContext *ctx) = 0;

  virtual void enterArrayAssign(KiepskiLangParser::ArrayAssignContext *ctx) = 0;
  virtual void exitArrayAssign(KiepskiLangParser::ArrayAssignContext *ctx) = 0;

  virtual void enterMatrixAssign(KiepskiLangParser::MatrixAssignContext *ctx) = 0;
  virtual void exitMatrixAssign(KiepskiLangParser::MatrixAssignContext *ctx) = 0;

  virtual void enterPrint(KiepskiLangParser::PrintContext *ctx) = 0;
  virtual void exitPrint(KiepskiLangParser::PrintContext *ctx) = 0;

  virtual void enterRead(KiepskiLangParser::ReadContext *ctx) = 0;
  virtual void exitRead(KiepskiLangParser::ReadContext *ctx) = 0;

  virtual void enterIfStatement(KiepskiLangParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(KiepskiLangParser::IfStatementContext *ctx) = 0;

  virtual void enterElseBlock(KiepskiLangParser::ElseBlockContext *ctx) = 0;
  virtual void exitElseBlock(KiepskiLangParser::ElseBlockContext *ctx) = 0;

  virtual void enterWhileStatement(KiepskiLangParser::WhileStatementContext *ctx) = 0;
  virtual void exitWhileStatement(KiepskiLangParser::WhileStatementContext *ctx) = 0;

  virtual void enterLogicBinaryExpr(KiepskiLangParser::LogicBinaryExprContext *ctx) = 0;
  virtual void exitLogicBinaryExpr(KiepskiLangParser::LogicBinaryExprContext *ctx) = 0;

  virtual void enterIntLiteral(KiepskiLangParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(KiepskiLangParser::IntLiteralContext *ctx) = 0;

  virtual void enterComparisonExpr(KiepskiLangParser::ComparisonExprContext *ctx) = 0;
  virtual void exitComparisonExpr(KiepskiLangParser::ComparisonExprContext *ctx) = 0;

  virtual void enterBoolLiteral(KiepskiLangParser::BoolLiteralContext *ctx) = 0;
  virtual void exitBoolLiteral(KiepskiLangParser::BoolLiteralContext *ctx) = 0;

  virtual void enterBraces(KiepskiLangParser::BracesContext *ctx) = 0;
  virtual void exitBraces(KiepskiLangParser::BracesContext *ctx) = 0;

  virtual void enterVarReference(KiepskiLangParser::VarReferenceContext *ctx) = 0;
  virtual void exitVarReference(KiepskiLangParser::VarReferenceContext *ctx) = 0;

  virtual void enterArrayAccessExpr(KiepskiLangParser::ArrayAccessExprContext *ctx) = 0;
  virtual void exitArrayAccessExpr(KiepskiLangParser::ArrayAccessExprContext *ctx) = 0;

  virtual void enterStringLiteral(KiepskiLangParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(KiepskiLangParser::StringLiteralContext *ctx) = 0;

  virtual void enterAddExpr(KiepskiLangParser::AddExprContext *ctx) = 0;
  virtual void exitAddExpr(KiepskiLangParser::AddExprContext *ctx) = 0;

  virtual void enterMulExpr(KiepskiLangParser::MulExprContext *ctx) = 0;
  virtual void exitMulExpr(KiepskiLangParser::MulExprContext *ctx) = 0;

  virtual void enterFloatLiteral(KiepskiLangParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(KiepskiLangParser::FloatLiteralContext *ctx) = 0;

  virtual void enterMatrixAccessExpr(KiepskiLangParser::MatrixAccessExprContext *ctx) = 0;
  virtual void exitMatrixAccessExpr(KiepskiLangParser::MatrixAccessExprContext *ctx) = 0;

  virtual void enterLogicNegExpr(KiepskiLangParser::LogicNegExprContext *ctx) = 0;
  virtual void exitLogicNegExpr(KiepskiLangParser::LogicNegExprContext *ctx) = 0;

  virtual void enterArrayInit(KiepskiLangParser::ArrayInitContext *ctx) = 0;
  virtual void exitArrayInit(KiepskiLangParser::ArrayInitContext *ctx) = 0;

  virtual void enterMatrixInit(KiepskiLangParser::MatrixInitContext *ctx) = 0;
  virtual void exitMatrixInit(KiepskiLangParser::MatrixInitContext *ctx) = 0;


};

