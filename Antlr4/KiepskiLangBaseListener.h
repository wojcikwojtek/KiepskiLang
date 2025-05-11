
// Generated from KiepskiLang.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "KiepskiLangListener.h"


/**
 * This class provides an empty implementation of KiepskiLangListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  KiepskiLangBaseListener : public KiepskiLangListener {
public:

  virtual void enterProgram(KiepskiLangParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(KiepskiLangParser::ProgramContext * /*ctx*/) override { }

  virtual void enterFunctionDecl(KiepskiLangParser::FunctionDeclContext * /*ctx*/) override { }
  virtual void exitFunctionDecl(KiepskiLangParser::FunctionDeclContext * /*ctx*/) override { }

  virtual void enterGlobalVarDecl(KiepskiLangParser::GlobalVarDeclContext * /*ctx*/) override { }
  virtual void exitGlobalVarDecl(KiepskiLangParser::GlobalVarDeclContext * /*ctx*/) override { }

  virtual void enterStructDecl(KiepskiLangParser::StructDeclContext * /*ctx*/) override { }
  virtual void exitStructDecl(KiepskiLangParser::StructDeclContext * /*ctx*/) override { }

  virtual void enterClassDecl(KiepskiLangParser::ClassDeclContext * /*ctx*/) override { }
  virtual void exitClassDecl(KiepskiLangParser::ClassDeclContext * /*ctx*/) override { }

  virtual void enterClassField(KiepskiLangParser::ClassFieldContext * /*ctx*/) override { }
  virtual void exitClassField(KiepskiLangParser::ClassFieldContext * /*ctx*/) override { }

  virtual void enterClassMethod(KiepskiLangParser::ClassMethodContext * /*ctx*/) override { }
  virtual void exitClassMethod(KiepskiLangParser::ClassMethodContext * /*ctx*/) override { }

  virtual void enterVarInit(KiepskiLangParser::VarInitContext * /*ctx*/) override { }
  virtual void exitVarInit(KiepskiLangParser::VarInitContext * /*ctx*/) override { }

  virtual void enterParamList(KiepskiLangParser::ParamListContext * /*ctx*/) override { }
  virtual void exitParamList(KiepskiLangParser::ParamListContext * /*ctx*/) override { }

  virtual void enterReturnStatement(KiepskiLangParser::ReturnStatementContext * /*ctx*/) override { }
  virtual void exitReturnStatement(KiepskiLangParser::ReturnStatementContext * /*ctx*/) override { }

  virtual void enterStart(KiepskiLangParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(KiepskiLangParser::StartContext * /*ctx*/) override { }

  virtual void enterStatement(KiepskiLangParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(KiepskiLangParser::StatementContext * /*ctx*/) override { }

  virtual void enterScalarDecl(KiepskiLangParser::ScalarDeclContext * /*ctx*/) override { }
  virtual void exitScalarDecl(KiepskiLangParser::ScalarDeclContext * /*ctx*/) override { }

  virtual void enterObjectInstanceDecl(KiepskiLangParser::ObjectInstanceDeclContext * /*ctx*/) override { }
  virtual void exitObjectInstanceDecl(KiepskiLangParser::ObjectInstanceDeclContext * /*ctx*/) override { }

  virtual void enterArrayDecl(KiepskiLangParser::ArrayDeclContext * /*ctx*/) override { }
  virtual void exitArrayDecl(KiepskiLangParser::ArrayDeclContext * /*ctx*/) override { }

  virtual void enterMatrixDecl(KiepskiLangParser::MatrixDeclContext * /*ctx*/) override { }
  virtual void exitMatrixDecl(KiepskiLangParser::MatrixDeclContext * /*ctx*/) override { }

  virtual void enterVariableAssign(KiepskiLangParser::VariableAssignContext * /*ctx*/) override { }
  virtual void exitVariableAssign(KiepskiLangParser::VariableAssignContext * /*ctx*/) override { }

  virtual void enterFieldAssign(KiepskiLangParser::FieldAssignContext * /*ctx*/) override { }
  virtual void exitFieldAssign(KiepskiLangParser::FieldAssignContext * /*ctx*/) override { }

  virtual void enterArrayAssign(KiepskiLangParser::ArrayAssignContext * /*ctx*/) override { }
  virtual void exitArrayAssign(KiepskiLangParser::ArrayAssignContext * /*ctx*/) override { }

  virtual void enterMatrixAssign(KiepskiLangParser::MatrixAssignContext * /*ctx*/) override { }
  virtual void exitMatrixAssign(KiepskiLangParser::MatrixAssignContext * /*ctx*/) override { }

  virtual void enterPrint(KiepskiLangParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(KiepskiLangParser::PrintContext * /*ctx*/) override { }

  virtual void enterRead(KiepskiLangParser::ReadContext * /*ctx*/) override { }
  virtual void exitRead(KiepskiLangParser::ReadContext * /*ctx*/) override { }

  virtual void enterIfStatement(KiepskiLangParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(KiepskiLangParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterElseBlock(KiepskiLangParser::ElseBlockContext * /*ctx*/) override { }
  virtual void exitElseBlock(KiepskiLangParser::ElseBlockContext * /*ctx*/) override { }

  virtual void enterWhileStatement(KiepskiLangParser::WhileStatementContext * /*ctx*/) override { }
  virtual void exitWhileStatement(KiepskiLangParser::WhileStatementContext * /*ctx*/) override { }

  virtual void enterFieldAccessExpr(KiepskiLangParser::FieldAccessExprContext * /*ctx*/) override { }
  virtual void exitFieldAccessExpr(KiepskiLangParser::FieldAccessExprContext * /*ctx*/) override { }

  virtual void enterLogicBinaryExpr(KiepskiLangParser::LogicBinaryExprContext * /*ctx*/) override { }
  virtual void exitLogicBinaryExpr(KiepskiLangParser::LogicBinaryExprContext * /*ctx*/) override { }

  virtual void enterIntLiteral(KiepskiLangParser::IntLiteralContext * /*ctx*/) override { }
  virtual void exitIntLiteral(KiepskiLangParser::IntLiteralContext * /*ctx*/) override { }

  virtual void enterComparisonExpr(KiepskiLangParser::ComparisonExprContext * /*ctx*/) override { }
  virtual void exitComparisonExpr(KiepskiLangParser::ComparisonExprContext * /*ctx*/) override { }

  virtual void enterBoolLiteral(KiepskiLangParser::BoolLiteralContext * /*ctx*/) override { }
  virtual void exitBoolLiteral(KiepskiLangParser::BoolLiteralContext * /*ctx*/) override { }

  virtual void enterBraces(KiepskiLangParser::BracesContext * /*ctx*/) override { }
  virtual void exitBraces(KiepskiLangParser::BracesContext * /*ctx*/) override { }

  virtual void enterVarReference(KiepskiLangParser::VarReferenceContext * /*ctx*/) override { }
  virtual void exitVarReference(KiepskiLangParser::VarReferenceContext * /*ctx*/) override { }

  virtual void enterMethodCallExpr(KiepskiLangParser::MethodCallExprContext * /*ctx*/) override { }
  virtual void exitMethodCallExpr(KiepskiLangParser::MethodCallExprContext * /*ctx*/) override { }

  virtual void enterArrayAccessExpr(KiepskiLangParser::ArrayAccessExprContext * /*ctx*/) override { }
  virtual void exitArrayAccessExpr(KiepskiLangParser::ArrayAccessExprContext * /*ctx*/) override { }

  virtual void enterStringLiteral(KiepskiLangParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(KiepskiLangParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterAddExpr(KiepskiLangParser::AddExprContext * /*ctx*/) override { }
  virtual void exitAddExpr(KiepskiLangParser::AddExprContext * /*ctx*/) override { }

  virtual void enterFunctionCallExpr(KiepskiLangParser::FunctionCallExprContext * /*ctx*/) override { }
  virtual void exitFunctionCallExpr(KiepskiLangParser::FunctionCallExprContext * /*ctx*/) override { }

  virtual void enterMulExpr(KiepskiLangParser::MulExprContext * /*ctx*/) override { }
  virtual void exitMulExpr(KiepskiLangParser::MulExprContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(KiepskiLangParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(KiepskiLangParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterMatrixAccessExpr(KiepskiLangParser::MatrixAccessExprContext * /*ctx*/) override { }
  virtual void exitMatrixAccessExpr(KiepskiLangParser::MatrixAccessExprContext * /*ctx*/) override { }

  virtual void enterLogicNegExpr(KiepskiLangParser::LogicNegExprContext * /*ctx*/) override { }
  virtual void exitLogicNegExpr(KiepskiLangParser::LogicNegExprContext * /*ctx*/) override { }

  virtual void enterArrayInit(KiepskiLangParser::ArrayInitContext * /*ctx*/) override { }
  virtual void exitArrayInit(KiepskiLangParser::ArrayInitContext * /*ctx*/) override { }

  virtual void enterMatrixInit(KiepskiLangParser::MatrixInitContext * /*ctx*/) override { }
  virtual void exitMatrixInit(KiepskiLangParser::MatrixInitContext * /*ctx*/) override { }

  virtual void enterFunctionCall(KiepskiLangParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(KiepskiLangParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterArgList(KiepskiLangParser::ArgListContext * /*ctx*/) override { }
  virtual void exitArgList(KiepskiLangParser::ArgListContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

