
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
      "INT", "WS"
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
      "TYPE", "ID", "BINARYOPERATOR", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,17,126,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,
  	1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,11,4,11,89,8,11,11,11,12,11,90,1,
  	12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,101,8,12,1,13,1,13,5,13,105,
  	8,13,10,13,12,13,108,9,13,1,14,1,14,1,15,3,15,113,8,15,1,15,4,15,116,
  	8,15,11,15,12,15,117,1,16,4,16,121,8,16,11,16,12,16,122,1,16,1,16,0,0,
  	17,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,25,13,27,
  	14,29,15,31,16,33,17,1,0,6,2,0,10,10,13,13,3,0,65,90,95,95,97,122,4,0,
  	48,57,65,90,95,95,97,122,3,0,42,43,45,45,47,47,1,0,48,57,2,0,9,9,32,32,
  	131,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,
  	1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,
  	0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	0,33,1,0,0,0,1,35,1,0,0,0,3,37,1,0,0,0,5,43,1,0,0,0,7,48,1,0,0,0,9,50,
  	1,0,0,0,11,52,1,0,0,0,13,54,1,0,0,0,15,56,1,0,0,0,17,58,1,0,0,0,19,60,
  	1,0,0,0,21,75,1,0,0,0,23,88,1,0,0,0,25,100,1,0,0,0,27,102,1,0,0,0,29,
  	109,1,0,0,0,31,112,1,0,0,0,33,120,1,0,0,0,35,36,5,61,0,0,36,2,1,0,0,0,
  	37,38,5,80,0,0,38,39,5,82,0,0,39,40,5,73,0,0,40,41,5,78,0,0,41,42,5,84,
  	0,0,42,4,1,0,0,0,43,44,5,82,0,0,44,45,5,69,0,0,45,46,5,65,0,0,46,47,5,
  	68,0,0,47,6,1,0,0,0,48,49,5,42,0,0,49,8,1,0,0,0,50,51,5,47,0,0,51,10,
  	1,0,0,0,52,53,5,43,0,0,53,12,1,0,0,0,54,55,5,45,0,0,55,14,1,0,0,0,56,
  	57,5,40,0,0,57,16,1,0,0,0,58,59,5,41,0,0,59,18,1,0,0,0,60,61,5,83,0,0,
  	61,62,5,84,0,0,62,63,5,65,0,0,63,64,5,82,0,0,64,65,5,84,0,0,65,66,5,32,
  	0,0,66,67,5,80,0,0,67,68,5,82,0,0,68,69,5,79,0,0,69,70,5,71,0,0,70,71,
  	5,82,0,0,71,72,5,65,0,0,72,73,5,77,0,0,73,74,5,58,0,0,74,20,1,0,0,0,75,
  	76,5,69,0,0,76,77,5,78,0,0,77,78,5,68,0,0,78,79,5,32,0,0,79,80,5,80,0,
  	0,80,81,5,82,0,0,81,82,5,79,0,0,82,83,5,71,0,0,83,84,5,82,0,0,84,85,5,
  	65,0,0,85,86,5,77,0,0,86,22,1,0,0,0,87,89,7,0,0,0,88,87,1,0,0,0,89,90,
  	1,0,0,0,90,88,1,0,0,0,90,91,1,0,0,0,91,24,1,0,0,0,92,93,5,105,0,0,93,
  	94,5,110,0,0,94,101,5,116,0,0,95,96,5,102,0,0,96,97,5,108,0,0,97,98,5,
  	111,0,0,98,99,5,97,0,0,99,101,5,116,0,0,100,92,1,0,0,0,100,95,1,0,0,0,
  	101,26,1,0,0,0,102,106,7,1,0,0,103,105,7,2,0,0,104,103,1,0,0,0,105,108,
  	1,0,0,0,106,104,1,0,0,0,106,107,1,0,0,0,107,28,1,0,0,0,108,106,1,0,0,
  	0,109,110,7,3,0,0,110,30,1,0,0,0,111,113,5,45,0,0,112,111,1,0,0,0,112,
  	113,1,0,0,0,113,115,1,0,0,0,114,116,7,4,0,0,115,114,1,0,0,0,116,117,1,
  	0,0,0,117,115,1,0,0,0,117,118,1,0,0,0,118,32,1,0,0,0,119,121,7,5,0,0,
  	120,119,1,0,0,0,121,122,1,0,0,0,122,120,1,0,0,0,122,123,1,0,0,0,123,124,
  	1,0,0,0,124,125,6,16,0,0,125,34,1,0,0,0,7,0,90,100,106,112,117,122,1,
  	6,0,0
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
