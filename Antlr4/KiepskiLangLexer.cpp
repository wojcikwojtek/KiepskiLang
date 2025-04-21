
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
      "T__25", "T__26", "T__27", "T__28", "STARTPROG", "ENDPROG", "NEWLINE", 
      "TYPE", "BOOL", "ID", "INT", "FLOAT", "STRING", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,39,288,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,
  	7,35,2,36,7,36,2,37,7,37,2,38,7,38,1,0,1,0,1,1,1,1,1,1,1,2,1,2,1,2,1,
  	2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,
  	1,7,1,7,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,10,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,
  	1,16,1,17,1,17,1,17,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,21,1,21,1,21,
  	1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,24,1,24,1,24,1,24,1,25,1,25,1,25,
  	1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,29,1,29,1,29,1,29,1,29,
  	1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,30,1,30,
  	1,30,1,30,1,30,1,30,1,30,1,30,1,31,4,31,199,8,31,11,31,12,31,200,1,32,
  	1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,
  	1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,1,32,3,32,
  	231,8,32,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,1,33,3,33,242,8,33,1,
  	34,1,34,5,34,246,8,34,10,34,12,34,249,9,34,1,35,3,35,252,8,35,1,35,4,
  	35,255,8,35,11,35,12,35,256,1,36,3,36,260,8,36,1,36,4,36,263,8,36,11,
  	36,12,36,264,1,36,1,36,4,36,269,8,36,11,36,12,36,270,1,37,1,37,5,37,275,
  	8,37,10,37,12,37,278,9,37,1,37,1,37,1,38,4,38,283,8,38,11,38,12,38,284,
  	1,38,1,38,0,0,39,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,
  	23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,
  	23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,65,33,67,34,
  	69,35,71,36,73,37,75,38,77,39,1,0,6,2,0,10,10,13,13,3,0,65,90,95,95,97,
  	122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,3,0,10,10,13,13,34,34,2,0,
  	9,9,32,32,302,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,
  	0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,
  	0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,
  	1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,
  	0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,0,
  	0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,63,
  	1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,0,69,1,0,0,0,0,71,1,0,0,0,0,73,1,0,
  	0,0,0,75,1,0,0,0,0,77,1,0,0,0,1,79,1,0,0,0,3,81,1,0,0,0,5,84,1,0,0,0,
  	7,89,1,0,0,0,9,91,1,0,0,0,11,93,1,0,0,0,13,96,1,0,0,0,15,102,1,0,0,0,
  	17,107,1,0,0,0,19,110,1,0,0,0,21,114,1,0,0,0,23,119,1,0,0,0,25,125,1,
  	0,0,0,27,127,1,0,0,0,29,129,1,0,0,0,31,131,1,0,0,0,33,133,1,0,0,0,35,
  	136,1,0,0,0,37,139,1,0,0,0,39,141,1,0,0,0,41,144,1,0,0,0,43,146,1,0,0,
  	0,45,149,1,0,0,0,47,153,1,0,0,0,49,156,1,0,0,0,51,160,1,0,0,0,53,164,
  	1,0,0,0,55,166,1,0,0,0,57,168,1,0,0,0,59,170,1,0,0,0,61,185,1,0,0,0,63,
  	198,1,0,0,0,65,230,1,0,0,0,67,241,1,0,0,0,69,243,1,0,0,0,71,251,1,0,0,
  	0,73,259,1,0,0,0,75,272,1,0,0,0,77,282,1,0,0,0,79,80,5,61,0,0,80,2,1,
  	0,0,0,81,82,5,91,0,0,82,83,5,93,0,0,83,4,1,0,0,0,84,85,5,91,0,0,85,86,
  	5,93,0,0,86,87,5,91,0,0,87,88,5,93,0,0,88,6,1,0,0,0,89,90,5,91,0,0,90,
  	8,1,0,0,0,91,92,5,93,0,0,92,10,1,0,0,0,93,94,5,93,0,0,94,95,5,91,0,0,
  	95,12,1,0,0,0,96,97,5,80,0,0,97,98,5,82,0,0,98,99,5,73,0,0,99,100,5,78,
  	0,0,100,101,5,84,0,0,101,14,1,0,0,0,102,103,5,82,0,0,103,104,5,69,0,0,
  	104,105,5,65,0,0,105,106,5,68,0,0,106,16,1,0,0,0,107,108,5,73,0,0,108,
  	109,5,70,0,0,109,18,1,0,0,0,110,111,5,69,0,0,111,112,5,78,0,0,112,113,
  	5,68,0,0,113,20,1,0,0,0,114,115,5,69,0,0,115,116,5,76,0,0,116,117,5,83,
  	0,0,117,118,5,69,0,0,118,22,1,0,0,0,119,120,5,87,0,0,120,121,5,72,0,0,
  	121,122,5,73,0,0,122,123,5,76,0,0,123,124,5,69,0,0,124,24,1,0,0,0,125,
  	126,5,42,0,0,126,26,1,0,0,0,127,128,5,47,0,0,128,28,1,0,0,0,129,130,5,
  	43,0,0,130,30,1,0,0,0,131,132,5,45,0,0,132,32,1,0,0,0,133,134,5,61,0,
  	0,134,135,5,61,0,0,135,34,1,0,0,0,136,137,5,33,0,0,137,138,5,61,0,0,138,
  	36,1,0,0,0,139,140,5,60,0,0,140,38,1,0,0,0,141,142,5,60,0,0,142,143,5,
  	61,0,0,143,40,1,0,0,0,144,145,5,62,0,0,145,42,1,0,0,0,146,147,5,62,0,
  	0,147,148,5,61,0,0,148,44,1,0,0,0,149,150,5,65,0,0,150,151,5,78,0,0,151,
  	152,5,68,0,0,152,46,1,0,0,0,153,154,5,79,0,0,154,155,5,82,0,0,155,48,
  	1,0,0,0,156,157,5,88,0,0,157,158,5,79,0,0,158,159,5,82,0,0,159,50,1,0,
  	0,0,160,161,5,78,0,0,161,162,5,69,0,0,162,163,5,71,0,0,163,52,1,0,0,0,
  	164,165,5,40,0,0,165,54,1,0,0,0,166,167,5,41,0,0,167,56,1,0,0,0,168,169,
  	5,44,0,0,169,58,1,0,0,0,170,171,5,83,0,0,171,172,5,84,0,0,172,173,5,65,
  	0,0,173,174,5,82,0,0,174,175,5,84,0,0,175,176,5,32,0,0,176,177,5,80,0,
  	0,177,178,5,82,0,0,178,179,5,79,0,0,179,180,5,71,0,0,180,181,5,82,0,0,
  	181,182,5,65,0,0,182,183,5,77,0,0,183,184,5,58,0,0,184,60,1,0,0,0,185,
  	186,5,69,0,0,186,187,5,78,0,0,187,188,5,68,0,0,188,189,5,32,0,0,189,190,
  	5,80,0,0,190,191,5,82,0,0,191,192,5,79,0,0,192,193,5,71,0,0,193,194,5,
  	82,0,0,194,195,5,65,0,0,195,196,5,77,0,0,196,62,1,0,0,0,197,199,7,0,0,
  	0,198,197,1,0,0,0,199,200,1,0,0,0,200,198,1,0,0,0,200,201,1,0,0,0,201,
  	64,1,0,0,0,202,203,5,105,0,0,203,204,5,110,0,0,204,231,5,116,0,0,205,
  	206,5,108,0,0,206,207,5,111,0,0,207,208,5,110,0,0,208,231,5,103,0,0,209,
  	210,5,102,0,0,210,211,5,108,0,0,211,212,5,111,0,0,212,213,5,97,0,0,213,
  	231,5,116,0,0,214,215,5,100,0,0,215,216,5,111,0,0,216,217,5,117,0,0,217,
  	218,5,98,0,0,218,219,5,108,0,0,219,231,5,101,0,0,220,221,5,115,0,0,221,
  	222,5,116,0,0,222,223,5,114,0,0,223,224,5,105,0,0,224,225,5,110,0,0,225,
  	231,5,103,0,0,226,227,5,98,0,0,227,228,5,111,0,0,228,229,5,111,0,0,229,
  	231,5,108,0,0,230,202,1,0,0,0,230,205,1,0,0,0,230,209,1,0,0,0,230,214,
  	1,0,0,0,230,220,1,0,0,0,230,226,1,0,0,0,231,66,1,0,0,0,232,233,5,116,
  	0,0,233,234,5,114,0,0,234,235,5,117,0,0,235,242,5,101,0,0,236,237,5,102,
  	0,0,237,238,5,97,0,0,238,239,5,108,0,0,239,240,5,115,0,0,240,242,5,101,
  	0,0,241,232,1,0,0,0,241,236,1,0,0,0,242,68,1,0,0,0,243,247,7,1,0,0,244,
  	246,7,2,0,0,245,244,1,0,0,0,246,249,1,0,0,0,247,245,1,0,0,0,247,248,1,
  	0,0,0,248,70,1,0,0,0,249,247,1,0,0,0,250,252,5,45,0,0,251,250,1,0,0,0,
  	251,252,1,0,0,0,252,254,1,0,0,0,253,255,7,3,0,0,254,253,1,0,0,0,255,256,
  	1,0,0,0,256,254,1,0,0,0,256,257,1,0,0,0,257,72,1,0,0,0,258,260,5,45,0,
  	0,259,258,1,0,0,0,259,260,1,0,0,0,260,262,1,0,0,0,261,263,7,3,0,0,262,
  	261,1,0,0,0,263,264,1,0,0,0,264,262,1,0,0,0,264,265,1,0,0,0,265,266,1,
  	0,0,0,266,268,5,46,0,0,267,269,7,3,0,0,268,267,1,0,0,0,269,270,1,0,0,
  	0,270,268,1,0,0,0,270,271,1,0,0,0,271,74,1,0,0,0,272,276,5,34,0,0,273,
  	275,8,4,0,0,274,273,1,0,0,0,275,278,1,0,0,0,276,274,1,0,0,0,276,277,1,
  	0,0,0,277,279,1,0,0,0,278,276,1,0,0,0,279,280,5,34,0,0,280,76,1,0,0,0,
  	281,283,7,5,0,0,282,281,1,0,0,0,283,284,1,0,0,0,284,282,1,0,0,0,284,285,
  	1,0,0,0,285,286,1,0,0,0,286,287,6,38,0,0,287,78,1,0,0,0,12,0,200,230,
  	241,247,251,256,259,264,270,276,284,1,6,0,0
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
