
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
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "T__18", "T__19", "T__20", "T__21", "T__22", "T__23", "T__24", 
      "STARTPROG", "ENDPROG", "NEWLINE", "TYPE", "BOOL", "ID", "INT", "FLOAT", 
      "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,35,262,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,1,0,
  	1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,
  	1,11,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,15,1,15,1,15,1,16,1,16,
  	1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,20,1,20,
  	1,21,1,21,1,21,1,21,1,22,1,22,1,23,1,23,1,24,1,24,1,25,1,25,1,25,1,25,
  	1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,27,4,27,173,8,27,11,27,
  	12,27,174,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,
  	1,28,1,28,3,28,205,8,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	3,29,216,8,29,1,30,1,30,5,30,220,8,30,10,30,12,30,223,9,30,1,31,3,31,
  	226,8,31,1,31,4,31,229,8,31,11,31,12,31,230,1,32,3,32,234,8,32,1,32,4,
  	32,237,8,32,11,32,12,32,238,1,32,1,32,4,32,243,8,32,11,32,12,32,244,1,
  	33,1,33,5,33,249,8,33,10,33,12,33,252,9,33,1,33,1,33,1,34,4,34,257,8,
  	34,11,34,12,34,258,1,34,1,34,0,0,35,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,
  	8,17,9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,
  	20,41,21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,
  	63,32,65,33,67,34,69,35,1,0,6,2,0,10,10,13,13,3,0,65,90,95,95,97,122,
  	4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,10,10,13,13,34,34,2,0,9,9,
  	32,32,276,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,
  	0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,
  	1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,
  	0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,
  	0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,0,53,
  	1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,1,0,
  	0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,1,71,1,0,0,0,3,73,1,0,0,0,
  	5,76,1,0,0,0,7,81,1,0,0,0,9,83,1,0,0,0,11,85,1,0,0,0,13,88,1,0,0,0,15,
  	94,1,0,0,0,17,99,1,0,0,0,19,101,1,0,0,0,21,103,1,0,0,0,23,105,1,0,0,0,
  	25,107,1,0,0,0,27,110,1,0,0,0,29,113,1,0,0,0,31,115,1,0,0,0,33,118,1,
  	0,0,0,35,120,1,0,0,0,37,123,1,0,0,0,39,127,1,0,0,0,41,130,1,0,0,0,43,
  	134,1,0,0,0,45,138,1,0,0,0,47,140,1,0,0,0,49,142,1,0,0,0,51,144,1,0,0,
  	0,53,159,1,0,0,0,55,172,1,0,0,0,57,204,1,0,0,0,59,215,1,0,0,0,61,217,
  	1,0,0,0,63,225,1,0,0,0,65,233,1,0,0,0,67,246,1,0,0,0,69,256,1,0,0,0,71,
  	72,5,61,0,0,72,2,1,0,0,0,73,74,5,91,0,0,74,75,5,93,0,0,75,4,1,0,0,0,76,
  	77,5,91,0,0,77,78,5,93,0,0,78,79,5,91,0,0,79,80,5,93,0,0,80,6,1,0,0,0,
  	81,82,5,91,0,0,82,8,1,0,0,0,83,84,5,93,0,0,84,10,1,0,0,0,85,86,5,93,0,
  	0,86,87,5,91,0,0,87,12,1,0,0,0,88,89,5,80,0,0,89,90,5,82,0,0,90,91,5,
  	73,0,0,91,92,5,78,0,0,92,93,5,84,0,0,93,14,1,0,0,0,94,95,5,82,0,0,95,
  	96,5,69,0,0,96,97,5,65,0,0,97,98,5,68,0,0,98,16,1,0,0,0,99,100,5,42,0,
  	0,100,18,1,0,0,0,101,102,5,47,0,0,102,20,1,0,0,0,103,104,5,43,0,0,104,
  	22,1,0,0,0,105,106,5,45,0,0,106,24,1,0,0,0,107,108,5,61,0,0,108,109,5,
  	61,0,0,109,26,1,0,0,0,110,111,5,33,0,0,111,112,5,61,0,0,112,28,1,0,0,
  	0,113,114,5,60,0,0,114,30,1,0,0,0,115,116,5,60,0,0,116,117,5,61,0,0,117,
  	32,1,0,0,0,118,119,5,62,0,0,119,34,1,0,0,0,120,121,5,62,0,0,121,122,5,
  	61,0,0,122,36,1,0,0,0,123,124,5,65,0,0,124,125,5,78,0,0,125,126,5,68,
  	0,0,126,38,1,0,0,0,127,128,5,79,0,0,128,129,5,82,0,0,129,40,1,0,0,0,130,
  	131,5,88,0,0,131,132,5,79,0,0,132,133,5,82,0,0,133,42,1,0,0,0,134,135,
  	5,78,0,0,135,136,5,69,0,0,136,137,5,71,0,0,137,44,1,0,0,0,138,139,5,40,
  	0,0,139,46,1,0,0,0,140,141,5,41,0,0,141,48,1,0,0,0,142,143,5,44,0,0,143,
  	50,1,0,0,0,144,145,5,83,0,0,145,146,5,84,0,0,146,147,5,65,0,0,147,148,
  	5,82,0,0,148,149,5,84,0,0,149,150,5,32,0,0,150,151,5,80,0,0,151,152,5,
  	82,0,0,152,153,5,79,0,0,153,154,5,71,0,0,154,155,5,82,0,0,155,156,5,65,
  	0,0,156,157,5,77,0,0,157,158,5,58,0,0,158,52,1,0,0,0,159,160,5,69,0,0,
  	160,161,5,78,0,0,161,162,5,68,0,0,162,163,5,32,0,0,163,164,5,80,0,0,164,
  	165,5,82,0,0,165,166,5,79,0,0,166,167,5,71,0,0,167,168,5,82,0,0,168,169,
  	5,65,0,0,169,170,5,77,0,0,170,54,1,0,0,0,171,173,7,0,0,0,172,171,1,0,
  	0,0,173,174,1,0,0,0,174,172,1,0,0,0,174,175,1,0,0,0,175,56,1,0,0,0,176,
  	177,5,105,0,0,177,178,5,110,0,0,178,205,5,116,0,0,179,180,5,108,0,0,180,
  	181,5,111,0,0,181,182,5,110,0,0,182,205,5,103,0,0,183,184,5,102,0,0,184,
  	185,5,108,0,0,185,186,5,111,0,0,186,187,5,97,0,0,187,205,5,116,0,0,188,
  	189,5,100,0,0,189,190,5,111,0,0,190,191,5,117,0,0,191,192,5,98,0,0,192,
  	193,5,108,0,0,193,205,5,101,0,0,194,195,5,115,0,0,195,196,5,116,0,0,196,
  	197,5,114,0,0,197,198,5,105,0,0,198,199,5,110,0,0,199,205,5,103,0,0,200,
  	201,5,98,0,0,201,202,5,111,0,0,202,203,5,111,0,0,203,205,5,108,0,0,204,
  	176,1,0,0,0,204,179,1,0,0,0,204,183,1,0,0,0,204,188,1,0,0,0,204,194,1,
  	0,0,0,204,200,1,0,0,0,205,58,1,0,0,0,206,207,5,116,0,0,207,208,5,114,
  	0,0,208,209,5,117,0,0,209,216,5,101,0,0,210,211,5,102,0,0,211,212,5,97,
  	0,0,212,213,5,108,0,0,213,214,5,115,0,0,214,216,5,101,0,0,215,206,1,0,
  	0,0,215,210,1,0,0,0,216,60,1,0,0,0,217,221,7,1,0,0,218,220,7,2,0,0,219,
  	218,1,0,0,0,220,223,1,0,0,0,221,219,1,0,0,0,221,222,1,0,0,0,222,62,1,
  	0,0,0,223,221,1,0,0,0,224,226,5,45,0,0,225,224,1,0,0,0,225,226,1,0,0,
  	0,226,228,1,0,0,0,227,229,7,3,0,0,228,227,1,0,0,0,229,230,1,0,0,0,230,
  	228,1,0,0,0,230,231,1,0,0,0,231,64,1,0,0,0,232,234,5,45,0,0,233,232,1,
  	0,0,0,233,234,1,0,0,0,234,236,1,0,0,0,235,237,7,3,0,0,236,235,1,0,0,0,
  	237,238,1,0,0,0,238,236,1,0,0,0,238,239,1,0,0,0,239,240,1,0,0,0,240,242,
  	5,46,0,0,241,243,7,3,0,0,242,241,1,0,0,0,243,244,1,0,0,0,244,242,1,0,
  	0,0,244,245,1,0,0,0,245,66,1,0,0,0,246,250,5,34,0,0,247,249,8,4,0,0,248,
  	247,1,0,0,0,249,252,1,0,0,0,250,248,1,0,0,0,250,251,1,0,0,0,251,253,1,
  	0,0,0,252,250,1,0,0,0,253,254,5,34,0,0,254,68,1,0,0,0,255,257,7,5,0,0,
  	256,255,1,0,0,0,257,258,1,0,0,0,258,256,1,0,0,0,258,259,1,0,0,0,259,260,
  	1,0,0,0,260,261,6,34,0,0,261,70,1,0,0,0,12,0,174,204,215,221,225,230,
  	233,238,244,250,258,1,6,0,0
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
