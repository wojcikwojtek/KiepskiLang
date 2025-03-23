
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

  virtual void enterStart(KiepskiLangParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(KiepskiLangParser::StartContext * /*ctx*/) override { }

  virtual void enterStatement(KiepskiLangParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(KiepskiLangParser::StatementContext * /*ctx*/) override { }

  virtual void enterVarDecl(KiepskiLangParser::VarDeclContext * /*ctx*/) override { }
  virtual void exitVarDecl(KiepskiLangParser::VarDeclContext * /*ctx*/) override { }

  virtual void enterPrint(KiepskiLangParser::PrintContext * /*ctx*/) override { }
  virtual void exitPrint(KiepskiLangParser::PrintContext * /*ctx*/) override { }

  virtual void enterRead(KiepskiLangParser::ReadContext * /*ctx*/) override { }
  virtual void exitRead(KiepskiLangParser::ReadContext * /*ctx*/) override { }

  virtual void enterAddExpr(KiepskiLangParser::AddExprContext * /*ctx*/) override { }
  virtual void exitAddExpr(KiepskiLangParser::AddExprContext * /*ctx*/) override { }

  virtual void enterIntLiteral(KiepskiLangParser::IntLiteralContext * /*ctx*/) override { }
  virtual void exitIntLiteral(KiepskiLangParser::IntLiteralContext * /*ctx*/) override { }

  virtual void enterMulExpr(KiepskiLangParser::MulExprContext * /*ctx*/) override { }
  virtual void exitMulExpr(KiepskiLangParser::MulExprContext * /*ctx*/) override { }

  virtual void enterBraces(KiepskiLangParser::BracesContext * /*ctx*/) override { }
  virtual void exitBraces(KiepskiLangParser::BracesContext * /*ctx*/) override { }

  virtual void enterVarReference(KiepskiLangParser::VarReferenceContext * /*ctx*/) override { }
  virtual void exitVarReference(KiepskiLangParser::VarReferenceContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

