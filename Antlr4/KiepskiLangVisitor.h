
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

    virtual std::any visitStart(KiepskiLangParser::StartContext *context) = 0;

    virtual std::any visitStatement(KiepskiLangParser::StatementContext *context) = 0;

    virtual std::any visitVarDecl(KiepskiLangParser::VarDeclContext *context) = 0;

    virtual std::any visitPrint(KiepskiLangParser::PrintContext *context) = 0;

    virtual std::any visitRead(KiepskiLangParser::ReadContext *context) = 0;

    virtual std::any visitAddExpr(KiepskiLangParser::AddExprContext *context) = 0;

    virtual std::any visitIntLiteral(KiepskiLangParser::IntLiteralContext *context) = 0;

    virtual std::any visitMulExpr(KiepskiLangParser::MulExprContext *context) = 0;

    virtual std::any visitFloatLiteral(KiepskiLangParser::FloatLiteralContext *context) = 0;

    virtual std::any visitBraces(KiepskiLangParser::BracesContext *context) = 0;

    virtual std::any visitVarReference(KiepskiLangParser::VarReferenceContext *context) = 0;


};

