
// Generated from KiepskiLang.g4 by ANTLR 4.13.2


#include "KiepskiLangLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct KiepskiLangLexerStaticData final {
  KiepskiLangLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  KiepskiLangLexerStaticData(const KiepskiLangLexerStaticData&) = delete;
  KiepskiLangLexerStaticData(KiepskiLangLexerStaticData&&) = delete;
  KiepskiLangLexerStaticData& operator=(const KiepskiLangLexerStaticData&) = delete;
  KiepskiLangLexerStaticData& operator=(KiepskiLangLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag kiepskilanglexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<KiepskiLangLexerStaticData> kiepskilanglexerLexerStaticData = nullptr;

void kiepskilanglexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (kiepskilanglexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(kiepskilanglexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<KiepskiLangLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "STARTPROG", "ENDPROG", "NEWLINE", "TYPE", "ID", "BINARYOPERATOR", 
      "INT", "FLOAT", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'PRINT'", "'READ'", "'*'", "'/'", "'+'", "'-'", "'('", 
      "')'", "'START PROGRAM:'", "'END PROGRAM'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "STARTPROG", "ENDPROG", "NEWLINE", 
      "TYPE", "ID", "BINARYOPERATOR", "INT", "FLOAT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,18,142,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
  	2,1,2,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,
  	1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,4,11,91,8,11,11,11,
  	12,11,92,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,103,8,12,1,13,1,
  	13,5,13,107,8,13,10,13,12,13,110,9,13,1,14,1,14,1,15,3,15,115,8,15,1,
  	15,4,15,118,8,15,11,15,12,15,119,1,16,3,16,123,8,16,1,16,4,16,126,8,16,
  	11,16,12,16,127,1,16,1,16,4,16,132,8,16,11,16,12,16,133,1,17,4,17,137,
  	8,17,11,17,12,17,138,1,17,1,17,0,0,18,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,
  	8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,1,0,6,2,
  	0,10,10,13,13,3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,3,0,
  	42,43,45,45,47,47,1,0,48,57,2,0,9,9,32,32,150,0,1,1,0,0,0,0,3,1,0,0,0,
  	0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,
  	0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,
  	0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,1,
  	37,1,0,0,0,3,39,1,0,0,0,5,45,1,0,0,0,7,50,1,0,0,0,9,52,1,0,0,0,11,54,
  	1,0,0,0,13,56,1,0,0,0,15,58,1,0,0,0,17,60,1,0,0,0,19,62,1,0,0,0,21,77,
  	1,0,0,0,23,90,1,0,0,0,25,102,1,0,0,0,27,104,1,0,0,0,29,111,1,0,0,0,31,
  	114,1,0,0,0,33,122,1,0,0,0,35,136,1,0,0,0,37,38,5,61,0,0,38,2,1,0,0,0,
  	39,40,5,80,0,0,40,41,5,82,0,0,41,42,5,73,0,0,42,43,5,78,0,0,43,44,5,84,
  	0,0,44,4,1,0,0,0,45,46,5,82,0,0,46,47,5,69,0,0,47,48,5,65,0,0,48,49,5,
  	68,0,0,49,6,1,0,0,0,50,51,5,42,0,0,51,8,1,0,0,0,52,53,5,47,0,0,53,10,
  	1,0,0,0,54,55,5,43,0,0,55,12,1,0,0,0,56,57,5,45,0,0,57,14,1,0,0,0,58,
  	59,5,40,0,0,59,16,1,0,0,0,60,61,5,41,0,0,61,18,1,0,0,0,62,63,5,83,0,0,
  	63,64,5,84,0,0,64,65,5,65,0,0,65,66,5,82,0,0,66,67,5,84,0,0,67,68,5,32,
  	0,0,68,69,5,80,0,0,69,70,5,82,0,0,70,71,5,79,0,0,71,72,5,71,0,0,72,73,
  	5,82,0,0,73,74,5,65,0,0,74,75,5,77,0,0,75,76,5,58,0,0,76,20,1,0,0,0,77,
  	78,5,69,0,0,78,79,5,78,0,0,79,80,5,68,0,0,80,81,5,32,0,0,81,82,5,80,0,
  	0,82,83,5,82,0,0,83,84,5,79,0,0,84,85,5,71,0,0,85,86,5,82,0,0,86,87,5,
  	65,0,0,87,88,5,77,0,0,88,22,1,0,0,0,89,91,7,0,0,0,90,89,1,0,0,0,91,92,
  	1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,93,24,1,0,0,0,94,95,5,105,0,0,95,
  	96,5,110,0,0,96,103,5,116,0,0,97,98,5,102,0,0,98,99,5,108,0,0,99,100,
  	5,111,0,0,100,101,5,97,0,0,101,103,5,116,0,0,102,94,1,0,0,0,102,97,1,
  	0,0,0,103,26,1,0,0,0,104,108,7,1,0,0,105,107,7,2,0,0,106,105,1,0,0,0,
  	107,110,1,0,0,0,108,106,1,0,0,0,108,109,1,0,0,0,109,28,1,0,0,0,110,108,
  	1,0,0,0,111,112,7,3,0,0,112,30,1,0,0,0,113,115,5,45,0,0,114,113,1,0,0,
  	0,114,115,1,0,0,0,115,117,1,0,0,0,116,118,7,4,0,0,117,116,1,0,0,0,118,
  	119,1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,32,1,0,0,0,121,123,5,
  	45,0,0,122,121,1,0,0,0,122,123,1,0,0,0,123,125,1,0,0,0,124,126,7,4,0,
  	0,125,124,1,0,0,0,126,127,1,0,0,0,127,125,1,0,0,0,127,128,1,0,0,0,128,
  	129,1,0,0,0,129,131,5,46,0,0,130,132,7,4,0,0,131,130,1,0,0,0,132,133,
  	1,0,0,0,133,131,1,0,0,0,133,134,1,0,0,0,134,34,1,0,0,0,135,137,7,5,0,
  	0,136,135,1,0,0,0,137,138,1,0,0,0,138,136,1,0,0,0,138,139,1,0,0,0,139,
  	140,1,0,0,0,140,141,6,17,0,0,141,36,1,0,0,0,10,0,92,102,108,114,119,122,
  	127,133,138,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  kiepskilanglexerLexerStaticData = std::move(staticData);
}

}

KiepskiLangLexer::KiepskiLangLexer(CharStream *input) : Lexer(input) {
  KiepskiLangLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *kiepskilanglexerLexerStaticData->atn, kiepskilanglexerLexerStaticData->decisionToDFA, kiepskilanglexerLexerStaticData->sharedContextCache);
}

KiepskiLangLexer::~KiepskiLangLexer() {
  delete _interpreter;
}

std::string KiepskiLangLexer::getGrammarFileName() const {
  return "KiepskiLang.g4";
}

const std::vector<std::string>& KiepskiLangLexer::getRuleNames() const {
  return kiepskilanglexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& KiepskiLangLexer::getChannelNames() const {
  return kiepskilanglexerLexerStaticData->channelNames;
}

const std::vector<std::string>& KiepskiLangLexer::getModeNames() const {
  return kiepskilanglexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& KiepskiLangLexer::getVocabulary() const {
  return kiepskilanglexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView KiepskiLangLexer::getSerializedATN() const {
  return kiepskilanglexerLexerStaticData->serializedATN;
}

const atn::ATN& KiepskiLangLexer::getATN() const {
  return *kiepskilanglexerLexerStaticData->atn;
}




void KiepskiLangLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  kiepskilanglexerLexerInitialize();
#else
  ::antlr4::internal::call_once(kiepskilanglexerLexerOnceFlag, kiepskilanglexerLexerInitialize);
#endif
}
