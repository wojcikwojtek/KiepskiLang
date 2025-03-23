
// Generated from KiepskiLang.g4 by ANTLR 4.13.2


#include "KiepskiLangListener.h"
#include "KiepskiLangVisitor.h"

#include "KiepskiLangParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct KiepskiLangParserStaticData final {
  KiepskiLangParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  KiepskiLangParserStaticData(const KiepskiLangParserStaticData&) = delete;
  KiepskiLangParserStaticData(KiepskiLangParserStaticData&&) = delete;
  KiepskiLangParserStaticData& operator=(const KiepskiLangParserStaticData&) = delete;
  KiepskiLangParserStaticData& operator=(KiepskiLangParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag kiepskilangParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<KiepskiLangParserStaticData> kiepskilangParserStaticData = nullptr;

void kiepskilangParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (kiepskilangParserStaticData != nullptr) {
    return;
  }
#else
  assert(kiepskilangParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<KiepskiLangParserStaticData>(
    std::vector<std::string>{
      "program", "start", "statement", "varDecl", "print", "read", "expr"
    },
    std::vector<std::string>{
      "", "'='", "'PRINT'", "'READ'", "'*'", "'/'", "'+'", "'-'", "'('", 
      "')'", "'START PROGRAM:'", "'END PROGRAM'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "STARTPROG", "ENDPROG", "NEWLINE", 
      "TYPE", "ID", "BINARYOPERATOR", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,17,72,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,1,0,
  	1,0,1,1,1,1,1,1,5,1,20,8,1,10,1,12,1,23,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,39,8,2,1,3,1,3,1,3,1,3,1,3,1,4,1,4,
  	1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,59,8,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,5,6,67,8,6,10,6,12,6,70,9,6,1,6,0,1,12,7,0,2,4,6,8,10,12,0,
  	2,1,0,4,5,1,0,6,7,72,0,14,1,0,0,0,2,16,1,0,0,0,4,38,1,0,0,0,6,40,1,0,
  	0,0,8,45,1,0,0,0,10,48,1,0,0,0,12,58,1,0,0,0,14,15,3,2,1,0,15,1,1,0,0,
  	0,16,17,5,10,0,0,17,21,5,12,0,0,18,20,3,4,2,0,19,18,1,0,0,0,20,23,1,0,
  	0,0,21,19,1,0,0,0,21,22,1,0,0,0,22,24,1,0,0,0,23,21,1,0,0,0,24,25,5,11,
  	0,0,25,3,1,0,0,0,26,27,3,6,3,0,27,28,5,12,0,0,28,39,1,0,0,0,29,30,3,8,
  	4,0,30,31,5,12,0,0,31,39,1,0,0,0,32,33,3,10,5,0,33,34,5,12,0,0,34,39,
  	1,0,0,0,35,36,3,12,6,0,36,37,5,12,0,0,37,39,1,0,0,0,38,26,1,0,0,0,38,
  	29,1,0,0,0,38,32,1,0,0,0,38,35,1,0,0,0,39,5,1,0,0,0,40,41,5,13,0,0,41,
  	42,5,14,0,0,42,43,5,1,0,0,43,44,3,12,6,0,44,7,1,0,0,0,45,46,5,2,0,0,46,
  	47,3,12,6,0,47,9,1,0,0,0,48,49,5,3,0,0,49,50,5,14,0,0,50,11,1,0,0,0,51,
  	52,6,6,-1,0,52,59,5,16,0,0,53,59,5,14,0,0,54,55,5,8,0,0,55,56,3,12,6,
  	0,56,57,5,9,0,0,57,59,1,0,0,0,58,51,1,0,0,0,58,53,1,0,0,0,58,54,1,0,0,
  	0,59,68,1,0,0,0,60,61,10,5,0,0,61,62,7,0,0,0,62,67,3,12,6,6,63,64,10,
  	4,0,0,64,65,7,1,0,0,65,67,3,12,6,5,66,60,1,0,0,0,66,63,1,0,0,0,67,70,
  	1,0,0,0,68,66,1,0,0,0,68,69,1,0,0,0,69,13,1,0,0,0,70,68,1,0,0,0,5,21,
  	38,58,66,68
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  kiepskilangParserStaticData = std::move(staticData);
}

}

KiepskiLangParser::KiepskiLangParser(TokenStream *input) : KiepskiLangParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

KiepskiLangParser::KiepskiLangParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  KiepskiLangParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *kiepskilangParserStaticData->atn, kiepskilangParserStaticData->decisionToDFA, kiepskilangParserStaticData->sharedContextCache, options);
}

KiepskiLangParser::~KiepskiLangParser() {
  delete _interpreter;
}

const atn::ATN& KiepskiLangParser::getATN() const {
  return *kiepskilangParserStaticData->atn;
}

std::string KiepskiLangParser::getGrammarFileName() const {
  return "KiepskiLang.g4";
}

const std::vector<std::string>& KiepskiLangParser::getRuleNames() const {
  return kiepskilangParserStaticData->ruleNames;
}

const dfa::Vocabulary& KiepskiLangParser::getVocabulary() const {
  return kiepskilangParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView KiepskiLangParser::getSerializedATN() const {
  return kiepskilangParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

KiepskiLangParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KiepskiLangParser::StartContext* KiepskiLangParser::ProgramContext::start() {
  return getRuleContext<KiepskiLangParser::StartContext>(0);
}


size_t KiepskiLangParser::ProgramContext::getRuleIndex() const {
  return KiepskiLangParser::RuleProgram;
}

void KiepskiLangParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void KiepskiLangParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any KiepskiLangParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::ProgramContext* KiepskiLangParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, KiepskiLangParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(14);
    start();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StartContext ------------------------------------------------------------------

KiepskiLangParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KiepskiLangParser::StartContext::STARTPROG() {
  return getToken(KiepskiLangParser::STARTPROG, 0);
}

tree::TerminalNode* KiepskiLangParser::StartContext::NEWLINE() {
  return getToken(KiepskiLangParser::NEWLINE, 0);
}

tree::TerminalNode* KiepskiLangParser::StartContext::ENDPROG() {
  return getToken(KiepskiLangParser::ENDPROG, 0);
}

std::vector<KiepskiLangParser::StatementContext *> KiepskiLangParser::StartContext::statement() {
  return getRuleContexts<KiepskiLangParser::StatementContext>();
}

KiepskiLangParser::StatementContext* KiepskiLangParser::StartContext::statement(size_t i) {
  return getRuleContext<KiepskiLangParser::StatementContext>(i);
}


size_t KiepskiLangParser::StartContext::getRuleIndex() const {
  return KiepskiLangParser::RuleStart;
}

void KiepskiLangParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void KiepskiLangParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}


std::any KiepskiLangParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::StartContext* KiepskiLangParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 2, KiepskiLangParser::RuleStart);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(16);
    match(KiepskiLangParser::STARTPROG);
    setState(17);
    match(KiepskiLangParser::NEWLINE);
    setState(21);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 90380) != 0)) {
      setState(18);
      statement();
      setState(23);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(24);
    match(KiepskiLangParser::ENDPROG);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

KiepskiLangParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KiepskiLangParser::VarDeclContext* KiepskiLangParser::StatementContext::varDecl() {
  return getRuleContext<KiepskiLangParser::VarDeclContext>(0);
}

tree::TerminalNode* KiepskiLangParser::StatementContext::NEWLINE() {
  return getToken(KiepskiLangParser::NEWLINE, 0);
}

KiepskiLangParser::PrintContext* KiepskiLangParser::StatementContext::print() {
  return getRuleContext<KiepskiLangParser::PrintContext>(0);
}

KiepskiLangParser::ReadContext* KiepskiLangParser::StatementContext::read() {
  return getRuleContext<KiepskiLangParser::ReadContext>(0);
}

KiepskiLangParser::ExprContext* KiepskiLangParser::StatementContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}


size_t KiepskiLangParser::StatementContext::getRuleIndex() const {
  return KiepskiLangParser::RuleStatement;
}

void KiepskiLangParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void KiepskiLangParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any KiepskiLangParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::StatementContext* KiepskiLangParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 4, KiepskiLangParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(38);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KiepskiLangParser::TYPE: {
        enterOuterAlt(_localctx, 1);
        setState(26);
        varDecl();
        setState(27);
        match(KiepskiLangParser::NEWLINE);
        break;
      }

      case KiepskiLangParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(29);
        print();
        setState(30);
        match(KiepskiLangParser::NEWLINE);
        break;
      }

      case KiepskiLangParser::T__2: {
        enterOuterAlt(_localctx, 3);
        setState(32);
        read();
        setState(33);
        match(KiepskiLangParser::NEWLINE);
        break;
      }

      case KiepskiLangParser::T__7:
      case KiepskiLangParser::ID:
      case KiepskiLangParser::INT: {
        enterOuterAlt(_localctx, 4);
        setState(35);
        expr(0);
        setState(36);
        match(KiepskiLangParser::NEWLINE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

KiepskiLangParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KiepskiLangParser::VarDeclContext::TYPE() {
  return getToken(KiepskiLangParser::TYPE, 0);
}

tree::TerminalNode* KiepskiLangParser::VarDeclContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

KiepskiLangParser::ExprContext* KiepskiLangParser::VarDeclContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}


size_t KiepskiLangParser::VarDeclContext::getRuleIndex() const {
  return KiepskiLangParser::RuleVarDecl;
}

void KiepskiLangParser::VarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDecl(this);
}

void KiepskiLangParser::VarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDecl(this);
}


std::any KiepskiLangParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::VarDeclContext* KiepskiLangParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, KiepskiLangParser::RuleVarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(40);
    match(KiepskiLangParser::TYPE);
    setState(41);
    match(KiepskiLangParser::ID);
    setState(42);
    match(KiepskiLangParser::T__0);
    setState(43);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrintContext ------------------------------------------------------------------

KiepskiLangParser::PrintContext::PrintContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KiepskiLangParser::ExprContext* KiepskiLangParser::PrintContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}


size_t KiepskiLangParser::PrintContext::getRuleIndex() const {
  return KiepskiLangParser::RulePrint;
}

void KiepskiLangParser::PrintContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrint(this);
}

void KiepskiLangParser::PrintContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrint(this);
}


std::any KiepskiLangParser::PrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitPrint(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::PrintContext* KiepskiLangParser::print() {
  PrintContext *_localctx = _tracker.createInstance<PrintContext>(_ctx, getState());
  enterRule(_localctx, 8, KiepskiLangParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(45);
    match(KiepskiLangParser::T__1);
    setState(46);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReadContext ------------------------------------------------------------------

KiepskiLangParser::ReadContext::ReadContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KiepskiLangParser::ReadContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}


size_t KiepskiLangParser::ReadContext::getRuleIndex() const {
  return KiepskiLangParser::RuleRead;
}

void KiepskiLangParser::ReadContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRead(this);
}

void KiepskiLangParser::ReadContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRead(this);
}


std::any KiepskiLangParser::ReadContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitRead(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::ReadContext* KiepskiLangParser::read() {
  ReadContext *_localctx = _tracker.createInstance<ReadContext>(_ctx, getState());
  enterRule(_localctx, 10, KiepskiLangParser::RuleRead);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(48);
    match(KiepskiLangParser::T__2);
    setState(49);
    match(KiepskiLangParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

KiepskiLangParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KiepskiLangParser::ExprContext::getRuleIndex() const {
  return KiepskiLangParser::RuleExpr;
}

void KiepskiLangParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AddExprContext ------------------------------------------------------------------

std::vector<KiepskiLangParser::ExprContext *> KiepskiLangParser::AddExprContext::expr() {
  return getRuleContexts<KiepskiLangParser::ExprContext>();
}

KiepskiLangParser::ExprContext* KiepskiLangParser::AddExprContext::expr(size_t i) {
  return getRuleContext<KiepskiLangParser::ExprContext>(i);
}

KiepskiLangParser::AddExprContext::AddExprContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::AddExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAddExpr(this);
}
void KiepskiLangParser::AddExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAddExpr(this);
}

std::any KiepskiLangParser::AddExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitAddExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntLiteralContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::IntLiteralContext::INT() {
  return getToken(KiepskiLangParser::INT, 0);
}

KiepskiLangParser::IntLiteralContext::IntLiteralContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::IntLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntLiteral(this);
}
void KiepskiLangParser::IntLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntLiteral(this);
}

std::any KiepskiLangParser::IntLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitIntLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulExprContext ------------------------------------------------------------------

std::vector<KiepskiLangParser::ExprContext *> KiepskiLangParser::MulExprContext::expr() {
  return getRuleContexts<KiepskiLangParser::ExprContext>();
}

KiepskiLangParser::ExprContext* KiepskiLangParser::MulExprContext::expr(size_t i) {
  return getRuleContext<KiepskiLangParser::ExprContext>(i);
}

KiepskiLangParser::MulExprContext::MulExprContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::MulExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMulExpr(this);
}
void KiepskiLangParser::MulExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMulExpr(this);
}

std::any KiepskiLangParser::MulExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitMulExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BracesContext ------------------------------------------------------------------

KiepskiLangParser::ExprContext* KiepskiLangParser::BracesContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}

KiepskiLangParser::BracesContext::BracesContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::BracesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBraces(this);
}
void KiepskiLangParser::BracesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBraces(this);
}

std::any KiepskiLangParser::BracesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitBraces(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarReferenceContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::VarReferenceContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

KiepskiLangParser::VarReferenceContext::VarReferenceContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::VarReferenceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarReference(this);
}
void KiepskiLangParser::VarReferenceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarReference(this);
}

std::any KiepskiLangParser::VarReferenceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitVarReference(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::ExprContext* KiepskiLangParser::expr() {
   return expr(0);
}

KiepskiLangParser::ExprContext* KiepskiLangParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  KiepskiLangParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  KiepskiLangParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, KiepskiLangParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(58);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case KiepskiLangParser::INT: {
        _localctx = _tracker.createInstance<IntLiteralContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(52);
        match(KiepskiLangParser::INT);
        break;
      }

      case KiepskiLangParser::ID: {
        _localctx = _tracker.createInstance<VarReferenceContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(53);
        match(KiepskiLangParser::ID);
        break;
      }

      case KiepskiLangParser::T__7: {
        _localctx = _tracker.createInstance<BracesContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(54);
        match(KiepskiLangParser::T__7);
        setState(55);
        expr(0);
        setState(56);
        match(KiepskiLangParser::T__8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(68);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(66);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(60);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(61);
          _la = _input->LA(1);
          if (!(_la == KiepskiLangParser::T__3

          || _la == KiepskiLangParser::T__4)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(62);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(63);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(64);
          _la = _input->LA(1);
          if (!(_la == KiepskiLangParser::T__5

          || _la == KiepskiLangParser::T__6)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(65);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(70);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool KiepskiLangParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 6: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool KiepskiLangParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void KiepskiLangParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  kiepskilangParserInitialize();
#else
  ::antlr4::internal::call_once(kiepskilangParserOnceFlag, kiepskilangParserInitialize);
#endif
}
