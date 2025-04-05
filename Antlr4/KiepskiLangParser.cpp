
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
      "program", "start", "statement", "varDecl", "varAssign", "print", 
      "read", "expr", "arrayInit", "matrixInit"
    },
    std::vector<std::string>{
      "", "'='", "'[]'", "'[][]'", "'['", "']'", "']['", "'PRINT'", "'READ'", 
      "'*'", "'/'", "'+'", "'-'", "'=='", "'!='", "'<'", "'<='", "'>'", 
      "'>='", "'AND'", "'OR'", "'XOR'", "'NEG'", "'('", "')'", "','", "'START PROGRAM:'", 
      "'END PROGRAM'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "STARTPROG", "ENDPROG", "NEWLINE", 
      "TYPE", "BOOL", "ID", "INT", "FLOAT", "STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,35,154,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,1,1,1,1,1,5,1,26,8,1,10,1,12,1,29,9,1,
  	1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,
  	2,48,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,
  	64,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,
  	4,1,4,3,4,83,8,4,1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,3,7,113,8,
  	7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,127,8,7,10,7,12,
  	7,130,9,7,1,8,1,8,1,8,1,8,5,8,136,8,8,10,8,12,8,139,9,8,1,8,1,8,1,9,1,
  	9,1,9,1,9,5,9,147,8,9,10,9,12,9,150,9,9,1,9,1,9,1,9,0,1,14,10,0,2,4,6,
  	8,10,12,14,16,18,0,4,1,0,9,10,1,0,11,12,1,0,13,18,1,0,19,21,166,0,20,
  	1,0,0,0,2,22,1,0,0,0,4,47,1,0,0,0,6,63,1,0,0,0,8,82,1,0,0,0,10,84,1,0,
  	0,0,12,87,1,0,0,0,14,112,1,0,0,0,16,131,1,0,0,0,18,142,1,0,0,0,20,21,
  	3,2,1,0,21,1,1,0,0,0,22,23,5,26,0,0,23,27,5,28,0,0,24,26,3,4,2,0,25,24,
  	1,0,0,0,26,29,1,0,0,0,27,25,1,0,0,0,27,28,1,0,0,0,28,30,1,0,0,0,29,27,
  	1,0,0,0,30,31,5,27,0,0,31,3,1,0,0,0,32,33,3,6,3,0,33,34,5,28,0,0,34,48,
  	1,0,0,0,35,36,3,8,4,0,36,37,5,28,0,0,37,48,1,0,0,0,38,39,3,10,5,0,39,
  	40,5,28,0,0,40,48,1,0,0,0,41,42,3,12,6,0,42,43,5,28,0,0,43,48,1,0,0,0,
  	44,45,3,14,7,0,45,46,5,28,0,0,46,48,1,0,0,0,47,32,1,0,0,0,47,35,1,0,0,
  	0,47,38,1,0,0,0,47,41,1,0,0,0,47,44,1,0,0,0,48,5,1,0,0,0,49,50,5,29,0,
  	0,50,51,5,31,0,0,51,52,5,1,0,0,52,64,3,14,7,0,53,54,5,29,0,0,54,55,5,
  	2,0,0,55,56,5,31,0,0,56,57,5,1,0,0,57,64,3,16,8,0,58,59,5,29,0,0,59,60,
  	5,3,0,0,60,61,5,31,0,0,61,62,5,1,0,0,62,64,3,18,9,0,63,49,1,0,0,0,63,
  	53,1,0,0,0,63,58,1,0,0,0,64,7,1,0,0,0,65,66,5,31,0,0,66,67,5,1,0,0,67,
  	83,3,14,7,0,68,69,5,31,0,0,69,70,5,4,0,0,70,71,5,32,0,0,71,72,5,5,0,0,
  	72,73,5,1,0,0,73,83,3,14,7,0,74,75,5,31,0,0,75,76,5,4,0,0,76,77,5,32,
  	0,0,77,78,5,6,0,0,78,79,5,32,0,0,79,80,5,5,0,0,80,81,5,1,0,0,81,83,3,
  	14,7,0,82,65,1,0,0,0,82,68,1,0,0,0,82,74,1,0,0,0,83,9,1,0,0,0,84,85,5,
  	7,0,0,85,86,3,14,7,0,86,11,1,0,0,0,87,88,5,8,0,0,88,89,5,31,0,0,89,13,
  	1,0,0,0,90,91,6,7,-1,0,91,92,5,22,0,0,92,113,3,14,7,9,93,113,5,32,0,0,
  	94,113,5,33,0,0,95,113,5,30,0,0,96,113,5,34,0,0,97,113,5,31,0,0,98,99,
  	5,23,0,0,99,100,3,14,7,0,100,101,5,24,0,0,101,113,1,0,0,0,102,103,5,31,
  	0,0,103,104,5,4,0,0,104,105,5,32,0,0,105,113,5,5,0,0,106,107,5,31,0,0,
  	107,108,5,4,0,0,108,109,5,32,0,0,109,110,5,6,0,0,110,111,5,32,0,0,111,
  	113,5,5,0,0,112,90,1,0,0,0,112,93,1,0,0,0,112,94,1,0,0,0,112,95,1,0,0,
  	0,112,96,1,0,0,0,112,97,1,0,0,0,112,98,1,0,0,0,112,102,1,0,0,0,112,106,
  	1,0,0,0,113,128,1,0,0,0,114,115,10,13,0,0,115,116,7,0,0,0,116,127,3,14,
  	7,14,117,118,10,12,0,0,118,119,7,1,0,0,119,127,3,14,7,13,120,121,10,11,
  	0,0,121,122,7,2,0,0,122,127,3,14,7,12,123,124,10,10,0,0,124,125,7,3,0,
  	0,125,127,3,14,7,11,126,114,1,0,0,0,126,117,1,0,0,0,126,120,1,0,0,0,126,
  	123,1,0,0,0,127,130,1,0,0,0,128,126,1,0,0,0,128,129,1,0,0,0,129,15,1,
  	0,0,0,130,128,1,0,0,0,131,132,5,4,0,0,132,137,3,14,7,0,133,134,5,25,0,
  	0,134,136,3,14,7,0,135,133,1,0,0,0,136,139,1,0,0,0,137,135,1,0,0,0,137,
  	138,1,0,0,0,138,140,1,0,0,0,139,137,1,0,0,0,140,141,5,5,0,0,141,17,1,
  	0,0,0,142,143,5,4,0,0,143,148,3,16,8,0,144,145,5,25,0,0,145,147,3,16,
  	8,0,146,144,1,0,0,0,147,150,1,0,0,0,148,146,1,0,0,0,148,149,1,0,0,0,149,
  	151,1,0,0,0,150,148,1,0,0,0,151,152,5,5,0,0,152,19,1,0,0,0,9,27,47,63,
  	82,112,126,128,137,148
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
    setState(20);
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
    setState(22);
    match(KiepskiLangParser::STARTPROG);
    setState(23);
    match(KiepskiLangParser::NEWLINE);
    setState(27);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 33835450752) != 0)) {
      setState(24);
      statement();
      setState(29);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(30);
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

KiepskiLangParser::VarAssignContext* KiepskiLangParser::StatementContext::varAssign() {
  return getRuleContext<KiepskiLangParser::VarAssignContext>(0);
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
    setState(47);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(32);
      varDecl();
      setState(33);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(35);
      varAssign();
      setState(36);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(38);
      print();
      setState(39);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(41);
      read();
      setState(42);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(44);
      expr(0);
      setState(45);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    default:
      break;
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


size_t KiepskiLangParser::VarDeclContext::getRuleIndex() const {
  return KiepskiLangParser::RuleVarDecl;
}

void KiepskiLangParser::VarDeclContext::copyFrom(VarDeclContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MatrixDeclContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::MatrixDeclContext::TYPE() {
  return getToken(KiepskiLangParser::TYPE, 0);
}

tree::TerminalNode* KiepskiLangParser::MatrixDeclContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

KiepskiLangParser::MatrixInitContext* KiepskiLangParser::MatrixDeclContext::matrixInit() {
  return getRuleContext<KiepskiLangParser::MatrixInitContext>(0);
}

KiepskiLangParser::MatrixDeclContext::MatrixDeclContext(VarDeclContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::MatrixDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixDecl(this);
}
void KiepskiLangParser::MatrixDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixDecl(this);
}

std::any KiepskiLangParser::MatrixDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitMatrixDecl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ScalarDeclContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::ScalarDeclContext::TYPE() {
  return getToken(KiepskiLangParser::TYPE, 0);
}

tree::TerminalNode* KiepskiLangParser::ScalarDeclContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

KiepskiLangParser::ExprContext* KiepskiLangParser::ScalarDeclContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}

KiepskiLangParser::ScalarDeclContext::ScalarDeclContext(VarDeclContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::ScalarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScalarDecl(this);
}
void KiepskiLangParser::ScalarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScalarDecl(this);
}

std::any KiepskiLangParser::ScalarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitScalarDecl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayDeclContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::ArrayDeclContext::TYPE() {
  return getToken(KiepskiLangParser::TYPE, 0);
}

tree::TerminalNode* KiepskiLangParser::ArrayDeclContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

KiepskiLangParser::ArrayInitContext* KiepskiLangParser::ArrayDeclContext::arrayInit() {
  return getRuleContext<KiepskiLangParser::ArrayInitContext>(0);
}

KiepskiLangParser::ArrayDeclContext::ArrayDeclContext(VarDeclContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::ArrayDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayDecl(this);
}
void KiepskiLangParser::ArrayDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayDecl(this);
}

std::any KiepskiLangParser::ArrayDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitArrayDecl(this);
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
    setState(63);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ScalarDeclContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(49);
      match(KiepskiLangParser::TYPE);
      setState(50);
      match(KiepskiLangParser::ID);
      setState(51);
      match(KiepskiLangParser::T__0);
      setState(52);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ArrayDeclContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(53);
      match(KiepskiLangParser::TYPE);
      setState(54);
      match(KiepskiLangParser::T__1);
      setState(55);
      match(KiepskiLangParser::ID);
      setState(56);
      match(KiepskiLangParser::T__0);
      setState(57);
      arrayInit();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<KiepskiLangParser::MatrixDeclContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(58);
      match(KiepskiLangParser::TYPE);
      setState(59);
      match(KiepskiLangParser::T__2);
      setState(60);
      match(KiepskiLangParser::ID);
      setState(61);
      match(KiepskiLangParser::T__0);
      setState(62);
      matrixInit();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarAssignContext ------------------------------------------------------------------

KiepskiLangParser::VarAssignContext::VarAssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KiepskiLangParser::VarAssignContext::getRuleIndex() const {
  return KiepskiLangParser::RuleVarAssign;
}

void KiepskiLangParser::VarAssignContext::copyFrom(VarAssignContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VariableAssignContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::VariableAssignContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

KiepskiLangParser::ExprContext* KiepskiLangParser::VariableAssignContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}

KiepskiLangParser::VariableAssignContext::VariableAssignContext(VarAssignContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::VariableAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableAssign(this);
}
void KiepskiLangParser::VariableAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableAssign(this);
}

std::any KiepskiLangParser::VariableAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitVariableAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArrayAssignContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::ArrayAssignContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

tree::TerminalNode* KiepskiLangParser::ArrayAssignContext::INT() {
  return getToken(KiepskiLangParser::INT, 0);
}

KiepskiLangParser::ExprContext* KiepskiLangParser::ArrayAssignContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}

KiepskiLangParser::ArrayAssignContext::ArrayAssignContext(VarAssignContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::ArrayAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAssign(this);
}
void KiepskiLangParser::ArrayAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAssign(this);
}

std::any KiepskiLangParser::ArrayAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitArrayAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MatrixAssignContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::MatrixAssignContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

std::vector<tree::TerminalNode *> KiepskiLangParser::MatrixAssignContext::INT() {
  return getTokens(KiepskiLangParser::INT);
}

tree::TerminalNode* KiepskiLangParser::MatrixAssignContext::INT(size_t i) {
  return getToken(KiepskiLangParser::INT, i);
}

KiepskiLangParser::ExprContext* KiepskiLangParser::MatrixAssignContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}

KiepskiLangParser::MatrixAssignContext::MatrixAssignContext(VarAssignContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::MatrixAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixAssign(this);
}
void KiepskiLangParser::MatrixAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixAssign(this);
}

std::any KiepskiLangParser::MatrixAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitMatrixAssign(this);
  else
    return visitor->visitChildren(this);
}
KiepskiLangParser::VarAssignContext* KiepskiLangParser::varAssign() {
  VarAssignContext *_localctx = _tracker.createInstance<VarAssignContext>(_ctx, getState());
  enterRule(_localctx, 8, KiepskiLangParser::RuleVarAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(82);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<KiepskiLangParser::VariableAssignContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(65);
      match(KiepskiLangParser::ID);
      setState(66);
      match(KiepskiLangParser::T__0);
      setState(67);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ArrayAssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(68);
      match(KiepskiLangParser::ID);
      setState(69);
      match(KiepskiLangParser::T__3);
      setState(70);
      match(KiepskiLangParser::INT);
      setState(71);
      match(KiepskiLangParser::T__4);
      setState(72);
      match(KiepskiLangParser::T__0);
      setState(73);
      expr(0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<KiepskiLangParser::MatrixAssignContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(74);
      match(KiepskiLangParser::ID);
      setState(75);
      match(KiepskiLangParser::T__3);
      setState(76);
      match(KiepskiLangParser::INT);
      setState(77);
      match(KiepskiLangParser::T__5);
      setState(78);
      match(KiepskiLangParser::INT);
      setState(79);
      match(KiepskiLangParser::T__4);
      setState(80);
      match(KiepskiLangParser::T__0);
      setState(81);
      expr(0);
      break;
    }

    default:
      break;
    }
   
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
  enterRule(_localctx, 10, KiepskiLangParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(84);
    match(KiepskiLangParser::T__6);
    setState(85);
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
  enterRule(_localctx, 12, KiepskiLangParser::RuleRead);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(87);
    match(KiepskiLangParser::T__7);
    setState(88);
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

//----------------- LogicBinaryExprContext ------------------------------------------------------------------

std::vector<KiepskiLangParser::ExprContext *> KiepskiLangParser::LogicBinaryExprContext::expr() {
  return getRuleContexts<KiepskiLangParser::ExprContext>();
}

KiepskiLangParser::ExprContext* KiepskiLangParser::LogicBinaryExprContext::expr(size_t i) {
  return getRuleContext<KiepskiLangParser::ExprContext>(i);
}

KiepskiLangParser::LogicBinaryExprContext::LogicBinaryExprContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::LogicBinaryExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicBinaryExpr(this);
}
void KiepskiLangParser::LogicBinaryExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicBinaryExpr(this);
}

std::any KiepskiLangParser::LogicBinaryExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitLogicBinaryExpr(this);
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
//----------------- ComparisonExprContext ------------------------------------------------------------------

std::vector<KiepskiLangParser::ExprContext *> KiepskiLangParser::ComparisonExprContext::expr() {
  return getRuleContexts<KiepskiLangParser::ExprContext>();
}

KiepskiLangParser::ExprContext* KiepskiLangParser::ComparisonExprContext::expr(size_t i) {
  return getRuleContext<KiepskiLangParser::ExprContext>(i);
}

KiepskiLangParser::ComparisonExprContext::ComparisonExprContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::ComparisonExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonExpr(this);
}
void KiepskiLangParser::ComparisonExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonExpr(this);
}

std::any KiepskiLangParser::ComparisonExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitComparisonExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolLiteralContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::BoolLiteralContext::BOOL() {
  return getToken(KiepskiLangParser::BOOL, 0);
}

KiepskiLangParser::BoolLiteralContext::BoolLiteralContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::BoolLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBoolLiteral(this);
}
void KiepskiLangParser::BoolLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBoolLiteral(this);
}

std::any KiepskiLangParser::BoolLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitBoolLiteral(this);
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
//----------------- ArrayAccessExprContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::ArrayAccessExprContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

tree::TerminalNode* KiepskiLangParser::ArrayAccessExprContext::INT() {
  return getToken(KiepskiLangParser::INT, 0);
}

KiepskiLangParser::ArrayAccessExprContext::ArrayAccessExprContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::ArrayAccessExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayAccessExpr(this);
}
void KiepskiLangParser::ArrayAccessExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayAccessExpr(this);
}

std::any KiepskiLangParser::ArrayAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitArrayAccessExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StringLiteralContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::StringLiteralContext::STRING() {
  return getToken(KiepskiLangParser::STRING, 0);
}

KiepskiLangParser::StringLiteralContext::StringLiteralContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}
void KiepskiLangParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}

std::any KiepskiLangParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
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
//----------------- FloatLiteralContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::FloatLiteralContext::FLOAT() {
  return getToken(KiepskiLangParser::FLOAT, 0);
}

KiepskiLangParser::FloatLiteralContext::FloatLiteralContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}
void KiepskiLangParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}

std::any KiepskiLangParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MatrixAccessExprContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::MatrixAccessExprContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

std::vector<tree::TerminalNode *> KiepskiLangParser::MatrixAccessExprContext::INT() {
  return getTokens(KiepskiLangParser::INT);
}

tree::TerminalNode* KiepskiLangParser::MatrixAccessExprContext::INT(size_t i) {
  return getToken(KiepskiLangParser::INT, i);
}

KiepskiLangParser::MatrixAccessExprContext::MatrixAccessExprContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::MatrixAccessExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixAccessExpr(this);
}
void KiepskiLangParser::MatrixAccessExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixAccessExpr(this);
}

std::any KiepskiLangParser::MatrixAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitMatrixAccessExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicNegExprContext ------------------------------------------------------------------

KiepskiLangParser::ExprContext* KiepskiLangParser::LogicNegExprContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}

KiepskiLangParser::LogicNegExprContext::LogicNegExprContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::LogicNegExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicNegExpr(this);
}
void KiepskiLangParser::LogicNegExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicNegExpr(this);
}

std::any KiepskiLangParser::LogicNegExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitLogicNegExpr(this);
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
  size_t startState = 14;
  enterRecursionRule(_localctx, 14, KiepskiLangParser::RuleExpr, precedence);

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
    setState(112);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LogicNegExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(91);
      match(KiepskiLangParser::T__21);
      setState(92);
      expr(9);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IntLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(93);
      match(KiepskiLangParser::INT);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FloatLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(94);
      match(KiepskiLangParser::FLOAT);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<BoolLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(95);
      match(KiepskiLangParser::BOOL);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StringLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(96);
      match(KiepskiLangParser::STRING);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VarReferenceContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(97);
      match(KiepskiLangParser::ID);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<BracesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(98);
      match(KiepskiLangParser::T__22);
      setState(99);
      expr(0);
      setState(100);
      match(KiepskiLangParser::T__23);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ArrayAccessExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(102);
      match(KiepskiLangParser::ID);
      setState(103);
      match(KiepskiLangParser::T__3);
      setState(104);
      match(KiepskiLangParser::INT);
      setState(105);
      match(KiepskiLangParser::T__4);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<MatrixAccessExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(106);
      match(KiepskiLangParser::ID);
      setState(107);
      match(KiepskiLangParser::T__3);
      setState(108);
      match(KiepskiLangParser::INT);
      setState(109);
      match(KiepskiLangParser::T__5);
      setState(110);
      match(KiepskiLangParser::INT);
      setState(111);
      match(KiepskiLangParser::T__4);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(128);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(126);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(114);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(115);
          _la = _input->LA(1);
          if (!(_la == KiepskiLangParser::T__8

          || _la == KiepskiLangParser::T__9)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(116);
          expr(14);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(117);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(118);
          _la = _input->LA(1);
          if (!(_la == KiepskiLangParser::T__10

          || _la == KiepskiLangParser::T__11)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(119);
          expr(13);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ComparisonExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(120);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(121);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 516096) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(122);
          expr(12);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<LogicBinaryExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(123);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(124);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 3670016) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(125);
          expr(11);
          break;
        }

        default:
          break;
        } 
      }
      setState(130);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArrayInitContext ------------------------------------------------------------------

KiepskiLangParser::ArrayInitContext::ArrayInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KiepskiLangParser::ExprContext *> KiepskiLangParser::ArrayInitContext::expr() {
  return getRuleContexts<KiepskiLangParser::ExprContext>();
}

KiepskiLangParser::ExprContext* KiepskiLangParser::ArrayInitContext::expr(size_t i) {
  return getRuleContext<KiepskiLangParser::ExprContext>(i);
}


size_t KiepskiLangParser::ArrayInitContext::getRuleIndex() const {
  return KiepskiLangParser::RuleArrayInit;
}

void KiepskiLangParser::ArrayInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArrayInit(this);
}

void KiepskiLangParser::ArrayInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArrayInit(this);
}


std::any KiepskiLangParser::ArrayInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitArrayInit(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::ArrayInitContext* KiepskiLangParser::arrayInit() {
  ArrayInitContext *_localctx = _tracker.createInstance<ArrayInitContext>(_ctx, getState());
  enterRule(_localctx, 16, KiepskiLangParser::RuleArrayInit);
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
    setState(131);
    match(KiepskiLangParser::T__3);
    setState(132);
    expr(0);
    setState(137);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__24) {
      setState(133);
      match(KiepskiLangParser::T__24);
      setState(134);
      expr(0);
      setState(139);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(140);
    match(KiepskiLangParser::T__4);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MatrixInitContext ------------------------------------------------------------------

KiepskiLangParser::MatrixInitContext::MatrixInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KiepskiLangParser::ArrayInitContext *> KiepskiLangParser::MatrixInitContext::arrayInit() {
  return getRuleContexts<KiepskiLangParser::ArrayInitContext>();
}

KiepskiLangParser::ArrayInitContext* KiepskiLangParser::MatrixInitContext::arrayInit(size_t i) {
  return getRuleContext<KiepskiLangParser::ArrayInitContext>(i);
}


size_t KiepskiLangParser::MatrixInitContext::getRuleIndex() const {
  return KiepskiLangParser::RuleMatrixInit;
}

void KiepskiLangParser::MatrixInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMatrixInit(this);
}

void KiepskiLangParser::MatrixInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMatrixInit(this);
}


std::any KiepskiLangParser::MatrixInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitMatrixInit(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::MatrixInitContext* KiepskiLangParser::matrixInit() {
  MatrixInitContext *_localctx = _tracker.createInstance<MatrixInitContext>(_ctx, getState());
  enterRule(_localctx, 18, KiepskiLangParser::RuleMatrixInit);
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
    setState(142);
    match(KiepskiLangParser::T__3);
    setState(143);
    arrayInit();
    setState(148);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__24) {
      setState(144);
      match(KiepskiLangParser::T__24);
      setState(145);
      arrayInit();
      setState(150);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(151);
    match(KiepskiLangParser::T__4);
   
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
    case 7: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool KiepskiLangParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 13);
    case 1: return precpred(_ctx, 12);
    case 2: return precpred(_ctx, 11);
    case 3: return precpred(_ctx, 10);

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
