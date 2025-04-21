
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
      "read", "ifStatement", "elseBlock", "whileStatement", "expr", "arrayInit", 
      "matrixInit"
    },
    std::vector<std::string>{
      "", "'='", "'[]'", "'[][]'", "'['", "']'", "']['", "'PRINT'", "'READ'", 
      "'IF'", "'END'", "'ELSE'", "'WHILE'", "'*'", "'/'", "'+'", "'-'", 
      "'=='", "'!='", "'<'", "'<='", "'>'", "'>='", "'AND'", "'OR'", "'XOR'", 
      "'NEG'", "'('", "')'", "','", "'START PROGRAM:'", "'END PROGRAM'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "STARTPROG", "ENDPROG", 
      "NEWLINE", "TYPE", "BOOL", "ID", "INT", "FLOAT", "STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,39,199,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,1,0,1,0,1,1,1,1,1,
  	1,5,1,32,8,1,10,1,12,1,35,9,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,3,2,60,8,2,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,76,8,3,1,4,1,4,
  	1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,3,4,95,8,
  	4,1,5,1,5,1,5,1,6,1,6,1,6,1,7,1,7,1,7,1,7,5,7,107,8,7,10,7,12,7,110,9,
  	7,1,7,3,7,113,8,7,1,7,1,7,1,8,1,8,1,8,5,8,120,8,8,10,8,12,8,123,9,8,1,
  	9,1,9,1,9,1,9,5,9,129,8,9,10,9,12,9,132,9,9,1,9,1,9,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,3,10,158,8,10,1,10,1,10,1,10,1,10,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,10,1,10,5,10,172,8,10,10,10,12,10,175,9,10,1,11,1,
  	11,1,11,1,11,5,11,181,8,11,10,11,12,11,184,9,11,1,11,1,11,1,12,1,12,1,
  	12,1,12,5,12,192,8,12,10,12,12,12,195,9,12,1,12,1,12,1,12,0,1,20,13,0,
  	2,4,6,8,10,12,14,16,18,20,22,24,0,4,1,0,13,14,1,0,15,16,1,0,17,22,1,0,
  	23,25,214,0,26,1,0,0,0,2,28,1,0,0,0,4,59,1,0,0,0,6,75,1,0,0,0,8,94,1,
  	0,0,0,10,96,1,0,0,0,12,99,1,0,0,0,14,102,1,0,0,0,16,116,1,0,0,0,18,124,
  	1,0,0,0,20,157,1,0,0,0,22,176,1,0,0,0,24,187,1,0,0,0,26,27,3,2,1,0,27,
  	1,1,0,0,0,28,29,5,30,0,0,29,33,5,32,0,0,30,32,3,4,2,0,31,30,1,0,0,0,32,
  	35,1,0,0,0,33,31,1,0,0,0,33,34,1,0,0,0,34,36,1,0,0,0,35,33,1,0,0,0,36,
  	37,5,31,0,0,37,3,1,0,0,0,38,39,3,6,3,0,39,40,5,32,0,0,40,60,1,0,0,0,41,
  	42,3,8,4,0,42,43,5,32,0,0,43,60,1,0,0,0,44,45,3,10,5,0,45,46,5,32,0,0,
  	46,60,1,0,0,0,47,48,3,12,6,0,48,49,5,32,0,0,49,60,1,0,0,0,50,51,3,20,
  	10,0,51,52,5,32,0,0,52,60,1,0,0,0,53,54,3,14,7,0,54,55,5,32,0,0,55,60,
  	1,0,0,0,56,57,3,18,9,0,57,58,5,32,0,0,58,60,1,0,0,0,59,38,1,0,0,0,59,
  	41,1,0,0,0,59,44,1,0,0,0,59,47,1,0,0,0,59,50,1,0,0,0,59,53,1,0,0,0,59,
  	56,1,0,0,0,60,5,1,0,0,0,61,62,5,33,0,0,62,63,5,35,0,0,63,64,5,1,0,0,64,
  	76,3,20,10,0,65,66,5,33,0,0,66,67,5,2,0,0,67,68,5,35,0,0,68,69,5,1,0,
  	0,69,76,3,22,11,0,70,71,5,33,0,0,71,72,5,3,0,0,72,73,5,35,0,0,73,74,5,
  	1,0,0,74,76,3,24,12,0,75,61,1,0,0,0,75,65,1,0,0,0,75,70,1,0,0,0,76,7,
  	1,0,0,0,77,78,5,35,0,0,78,79,5,1,0,0,79,95,3,20,10,0,80,81,5,35,0,0,81,
  	82,5,4,0,0,82,83,5,36,0,0,83,84,5,5,0,0,84,85,5,1,0,0,85,95,3,20,10,0,
  	86,87,5,35,0,0,87,88,5,4,0,0,88,89,5,36,0,0,89,90,5,6,0,0,90,91,5,36,
  	0,0,91,92,5,5,0,0,92,93,5,1,0,0,93,95,3,20,10,0,94,77,1,0,0,0,94,80,1,
  	0,0,0,94,86,1,0,0,0,95,9,1,0,0,0,96,97,5,7,0,0,97,98,3,20,10,0,98,11,
  	1,0,0,0,99,100,5,8,0,0,100,101,5,35,0,0,101,13,1,0,0,0,102,103,5,9,0,
  	0,103,104,3,20,10,0,104,108,5,32,0,0,105,107,3,4,2,0,106,105,1,0,0,0,
  	107,110,1,0,0,0,108,106,1,0,0,0,108,109,1,0,0,0,109,112,1,0,0,0,110,108,
  	1,0,0,0,111,113,3,16,8,0,112,111,1,0,0,0,112,113,1,0,0,0,113,114,1,0,
  	0,0,114,115,5,10,0,0,115,15,1,0,0,0,116,117,5,11,0,0,117,121,5,32,0,0,
  	118,120,3,4,2,0,119,118,1,0,0,0,120,123,1,0,0,0,121,119,1,0,0,0,121,122,
  	1,0,0,0,122,17,1,0,0,0,123,121,1,0,0,0,124,125,5,12,0,0,125,126,3,20,
  	10,0,126,130,5,32,0,0,127,129,3,4,2,0,128,127,1,0,0,0,129,132,1,0,0,0,
  	130,128,1,0,0,0,130,131,1,0,0,0,131,133,1,0,0,0,132,130,1,0,0,0,133,134,
  	5,10,0,0,134,19,1,0,0,0,135,136,6,10,-1,0,136,137,5,26,0,0,137,158,3,
  	20,10,9,138,158,5,36,0,0,139,158,5,37,0,0,140,158,5,34,0,0,141,158,5,
  	38,0,0,142,158,5,35,0,0,143,144,5,27,0,0,144,145,3,20,10,0,145,146,5,
  	28,0,0,146,158,1,0,0,0,147,148,5,35,0,0,148,149,5,4,0,0,149,150,5,36,
  	0,0,150,158,5,5,0,0,151,152,5,35,0,0,152,153,5,4,0,0,153,154,5,36,0,0,
  	154,155,5,6,0,0,155,156,5,36,0,0,156,158,5,5,0,0,157,135,1,0,0,0,157,
  	138,1,0,0,0,157,139,1,0,0,0,157,140,1,0,0,0,157,141,1,0,0,0,157,142,1,
  	0,0,0,157,143,1,0,0,0,157,147,1,0,0,0,157,151,1,0,0,0,158,173,1,0,0,0,
  	159,160,10,13,0,0,160,161,7,0,0,0,161,172,3,20,10,14,162,163,10,12,0,
  	0,163,164,7,1,0,0,164,172,3,20,10,13,165,166,10,11,0,0,166,167,7,2,0,
  	0,167,172,3,20,10,12,168,169,10,10,0,0,169,170,7,3,0,0,170,172,3,20,10,
  	11,171,159,1,0,0,0,171,162,1,0,0,0,171,165,1,0,0,0,171,168,1,0,0,0,172,
  	175,1,0,0,0,173,171,1,0,0,0,173,174,1,0,0,0,174,21,1,0,0,0,175,173,1,
  	0,0,0,176,177,5,4,0,0,177,182,3,20,10,0,178,179,5,29,0,0,179,181,3,20,
  	10,0,180,178,1,0,0,0,181,184,1,0,0,0,182,180,1,0,0,0,182,183,1,0,0,0,
  	183,185,1,0,0,0,184,182,1,0,0,0,185,186,5,5,0,0,186,23,1,0,0,0,187,188,
  	5,4,0,0,188,193,3,22,11,0,189,190,5,29,0,0,190,192,3,22,11,0,191,189,
  	1,0,0,0,192,195,1,0,0,0,193,191,1,0,0,0,193,194,1,0,0,0,194,196,1,0,0,
  	0,195,193,1,0,0,0,196,197,5,5,0,0,197,25,1,0,0,0,13,33,59,75,94,108,112,
  	121,130,157,171,173,182,193
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
    setState(26);
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
    setState(28);
    match(KiepskiLangParser::STARTPROG);
    setState(29);
    match(KiepskiLangParser::NEWLINE);
    setState(33);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 541367210880) != 0)) {
      setState(30);
      statement();
      setState(35);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(36);
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

KiepskiLangParser::IfStatementContext* KiepskiLangParser::StatementContext::ifStatement() {
  return getRuleContext<KiepskiLangParser::IfStatementContext>(0);
}

KiepskiLangParser::WhileStatementContext* KiepskiLangParser::StatementContext::whileStatement() {
  return getRuleContext<KiepskiLangParser::WhileStatementContext>(0);
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
    setState(59);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(38);
      varDecl();
      setState(39);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(41);
      varAssign();
      setState(42);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(44);
      print();
      setState(45);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(47);
      read();
      setState(48);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(50);
      expr(0);
      setState(51);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(53);
      ifStatement();
      setState(54);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(56);
      whileStatement();
      setState(57);
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
    setState(75);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ScalarDeclContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(61);
      match(KiepskiLangParser::TYPE);
      setState(62);
      match(KiepskiLangParser::ID);
      setState(63);
      match(KiepskiLangParser::T__0);
      setState(64);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ArrayDeclContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(65);
      match(KiepskiLangParser::TYPE);
      setState(66);
      match(KiepskiLangParser::T__1);
      setState(67);
      match(KiepskiLangParser::ID);
      setState(68);
      match(KiepskiLangParser::T__0);
      setState(69);
      arrayInit();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<KiepskiLangParser::MatrixDeclContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(70);
      match(KiepskiLangParser::TYPE);
      setState(71);
      match(KiepskiLangParser::T__2);
      setState(72);
      match(KiepskiLangParser::ID);
      setState(73);
      match(KiepskiLangParser::T__0);
      setState(74);
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
    setState(94);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<KiepskiLangParser::VariableAssignContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(77);
      match(KiepskiLangParser::ID);
      setState(78);
      match(KiepskiLangParser::T__0);
      setState(79);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ArrayAssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(80);
      match(KiepskiLangParser::ID);
      setState(81);
      match(KiepskiLangParser::T__3);
      setState(82);
      match(KiepskiLangParser::INT);
      setState(83);
      match(KiepskiLangParser::T__4);
      setState(84);
      match(KiepskiLangParser::T__0);
      setState(85);
      expr(0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<KiepskiLangParser::MatrixAssignContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(86);
      match(KiepskiLangParser::ID);
      setState(87);
      match(KiepskiLangParser::T__3);
      setState(88);
      match(KiepskiLangParser::INT);
      setState(89);
      match(KiepskiLangParser::T__5);
      setState(90);
      match(KiepskiLangParser::INT);
      setState(91);
      match(KiepskiLangParser::T__4);
      setState(92);
      match(KiepskiLangParser::T__0);
      setState(93);
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
    setState(96);
    match(KiepskiLangParser::T__6);
    setState(97);
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
    setState(99);
    match(KiepskiLangParser::T__7);
    setState(100);
    match(KiepskiLangParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

KiepskiLangParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KiepskiLangParser::ExprContext* KiepskiLangParser::IfStatementContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}

tree::TerminalNode* KiepskiLangParser::IfStatementContext::NEWLINE() {
  return getToken(KiepskiLangParser::NEWLINE, 0);
}

std::vector<KiepskiLangParser::StatementContext *> KiepskiLangParser::IfStatementContext::statement() {
  return getRuleContexts<KiepskiLangParser::StatementContext>();
}

KiepskiLangParser::StatementContext* KiepskiLangParser::IfStatementContext::statement(size_t i) {
  return getRuleContext<KiepskiLangParser::StatementContext>(i);
}

KiepskiLangParser::ElseBlockContext* KiepskiLangParser::IfStatementContext::elseBlock() {
  return getRuleContext<KiepskiLangParser::ElseBlockContext>(0);
}


size_t KiepskiLangParser::IfStatementContext::getRuleIndex() const {
  return KiepskiLangParser::RuleIfStatement;
}

void KiepskiLangParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void KiepskiLangParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}


std::any KiepskiLangParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::IfStatementContext* KiepskiLangParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 14, KiepskiLangParser::RuleIfStatement);
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
    setState(102);
    match(KiepskiLangParser::T__8);
    setState(103);
    expr(0);
    setState(104);
    match(KiepskiLangParser::NEWLINE);
    setState(108);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 541367210880) != 0)) {
      setState(105);
      statement();
      setState(110);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(112);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KiepskiLangParser::T__10) {
      setState(111);
      elseBlock();
    }
    setState(114);
    match(KiepskiLangParser::T__9);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ElseBlockContext ------------------------------------------------------------------

KiepskiLangParser::ElseBlockContext::ElseBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KiepskiLangParser::ElseBlockContext::NEWLINE() {
  return getToken(KiepskiLangParser::NEWLINE, 0);
}

std::vector<KiepskiLangParser::StatementContext *> KiepskiLangParser::ElseBlockContext::statement() {
  return getRuleContexts<KiepskiLangParser::StatementContext>();
}

KiepskiLangParser::StatementContext* KiepskiLangParser::ElseBlockContext::statement(size_t i) {
  return getRuleContext<KiepskiLangParser::StatementContext>(i);
}


size_t KiepskiLangParser::ElseBlockContext::getRuleIndex() const {
  return KiepskiLangParser::RuleElseBlock;
}

void KiepskiLangParser::ElseBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterElseBlock(this);
}

void KiepskiLangParser::ElseBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitElseBlock(this);
}


std::any KiepskiLangParser::ElseBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitElseBlock(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::ElseBlockContext* KiepskiLangParser::elseBlock() {
  ElseBlockContext *_localctx = _tracker.createInstance<ElseBlockContext>(_ctx, getState());
  enterRule(_localctx, 16, KiepskiLangParser::RuleElseBlock);
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
    setState(116);
    match(KiepskiLangParser::T__10);
    setState(117);
    match(KiepskiLangParser::NEWLINE);
    setState(121);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 541367210880) != 0)) {
      setState(118);
      statement();
      setState(123);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileStatementContext ------------------------------------------------------------------

KiepskiLangParser::WhileStatementContext::WhileStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KiepskiLangParser::ExprContext* KiepskiLangParser::WhileStatementContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}

tree::TerminalNode* KiepskiLangParser::WhileStatementContext::NEWLINE() {
  return getToken(KiepskiLangParser::NEWLINE, 0);
}

std::vector<KiepskiLangParser::StatementContext *> KiepskiLangParser::WhileStatementContext::statement() {
  return getRuleContexts<KiepskiLangParser::StatementContext>();
}

KiepskiLangParser::StatementContext* KiepskiLangParser::WhileStatementContext::statement(size_t i) {
  return getRuleContext<KiepskiLangParser::StatementContext>(i);
}


size_t KiepskiLangParser::WhileStatementContext::getRuleIndex() const {
  return KiepskiLangParser::RuleWhileStatement;
}

void KiepskiLangParser::WhileStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhileStatement(this);
}

void KiepskiLangParser::WhileStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhileStatement(this);
}


std::any KiepskiLangParser::WhileStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitWhileStatement(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::WhileStatementContext* KiepskiLangParser::whileStatement() {
  WhileStatementContext *_localctx = _tracker.createInstance<WhileStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, KiepskiLangParser::RuleWhileStatement);
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
    setState(124);
    match(KiepskiLangParser::T__11);
    setState(125);
    expr(0);
    setState(126);
    match(KiepskiLangParser::NEWLINE);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 541367210880) != 0)) {
      setState(127);
      statement();
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(133);
    match(KiepskiLangParser::T__9);
   
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
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, KiepskiLangParser::RuleExpr, precedence);

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
    setState(157);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LogicNegExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(136);
      match(KiepskiLangParser::T__25);
      setState(137);
      expr(9);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IntLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(138);
      match(KiepskiLangParser::INT);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FloatLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(139);
      match(KiepskiLangParser::FLOAT);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<BoolLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(140);
      match(KiepskiLangParser::BOOL);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StringLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(141);
      match(KiepskiLangParser::STRING);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VarReferenceContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(142);
      match(KiepskiLangParser::ID);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<BracesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(143);
      match(KiepskiLangParser::T__26);
      setState(144);
      expr(0);
      setState(145);
      match(KiepskiLangParser::T__27);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<ArrayAccessExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(147);
      match(KiepskiLangParser::ID);
      setState(148);
      match(KiepskiLangParser::T__3);
      setState(149);
      match(KiepskiLangParser::INT);
      setState(150);
      match(KiepskiLangParser::T__4);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<MatrixAccessExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(151);
      match(KiepskiLangParser::ID);
      setState(152);
      match(KiepskiLangParser::T__3);
      setState(153);
      match(KiepskiLangParser::INT);
      setState(154);
      match(KiepskiLangParser::T__5);
      setState(155);
      match(KiepskiLangParser::INT);
      setState(156);
      match(KiepskiLangParser::T__4);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(173);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(171);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(159);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(160);
          _la = _input->LA(1);
          if (!(_la == KiepskiLangParser::T__12

          || _la == KiepskiLangParser::T__13)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(161);
          expr(14);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(162);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(163);
          _la = _input->LA(1);
          if (!(_la == KiepskiLangParser::T__14

          || _la == KiepskiLangParser::T__15)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(164);
          expr(13);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ComparisonExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(165);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(166);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 8257536) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(167);
          expr(12);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<LogicBinaryExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(168);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(169);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 58720256) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(170);
          expr(11);
          break;
        }

        default:
          break;
        } 
      }
      setState(175);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
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
  enterRule(_localctx, 22, KiepskiLangParser::RuleArrayInit);
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
    setState(176);
    match(KiepskiLangParser::T__3);
    setState(177);
    expr(0);
    setState(182);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__28) {
      setState(178);
      match(KiepskiLangParser::T__28);
      setState(179);
      expr(0);
      setState(184);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(185);
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
  enterRule(_localctx, 24, KiepskiLangParser::RuleMatrixInit);
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
    setState(187);
    match(KiepskiLangParser::T__3);
    setState(188);
    arrayInit();
    setState(193);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__28) {
      setState(189);
      match(KiepskiLangParser::T__28);
      setState(190);
      arrayInit();
      setState(195);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(196);
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
    case 10: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

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
