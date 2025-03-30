
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

  virtual void enterVarDecl(KiepskiLangParser::VarDeclContext *ctx) = 0;
  virtual void exitVarDecl(KiepskiLangParser::VarDeclContext *ctx) = 0;

  virtual void enterPrint(KiepskiLangParser::PrintContext *ctx) = 0;
  virtual void exitPrint(KiepskiLangParser::PrintContext *ctx) = 0;

  virtual void enterRead(KiepskiLangParser::ReadContext *ctx) = 0;
  virtual void exitRead(KiepskiLangParser::ReadContext *ctx) = 0;

  virtual void enterAddExpr(KiepskiLangParser::AddExprContext *ctx) = 0;
  virtual void exitAddExpr(KiepskiLangParser::AddExprContext *ctx) = 0;

  virtual void enterIntLiteral(KiepskiLangParser::IntLiteralContext *ctx) = 0;
  virtual void exitIntLiteral(KiepskiLangParser::IntLiteralContext *ctx) = 0;

  virtual void enterMulExpr(KiepskiLangParser::MulExprContext *ctx) = 0;
  virtual void exitMulExpr(KiepskiLangParser::MulExprContext *ctx) = 0;

  virtual void enterFloatLiteral(KiepskiLangParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(KiepskiLangParser::FloatLiteralContext *ctx) = 0;

  virtual void enterBraces(KiepskiLangParser::BracesContext *ctx) = 0;
  virtual void exitBraces(KiepskiLangParser::BracesContext *ctx) = 0;

  virtual void enterVarReference(KiepskiLangParser::VarReferenceContext *ctx) = 0;
  virtual void exitVarReference(KiepskiLangParser::VarReferenceContext *ctx) = 0;


};

