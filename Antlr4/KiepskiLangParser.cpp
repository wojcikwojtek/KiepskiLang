
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
      "program", "functionDecl", "globalVarDecl", "structDecl", "classDecl", 
      "classMember", "varInit", "paramList", "returnStatement", "start", 
      "statement", "varDecl", "varAssign", "print", "read", "ifStatement", 
      "elseBlock", "whileStatement", "expr", "arrayInit", "matrixInit", 
      "functionCall", "argList"
    },
    std::vector<std::string>{
      "", "'FUNCTION'", "'('", "')'", "'=>'", "'END'", "'GLOBAL'", "'='", 
      "'STRUCT'", "'CLASS'", "','", "'RETURN'", "'NEW'", "'[]'", "'[][]'", 
      "'->'", "'['", "']'", "']['", "'PRINT'", "'READ'", "'IF'", "'ELSE'", 
      "'WHILE'", "'*'", "'/'", "'+'", "'-'", "'=='", "'!='", "'<'", "'<='", 
      "'>'", "'>='", "'AND'", "'OR'", "'XOR'", "'NEG'", "'START PROGRAM:'", 
      "'END PROGRAM'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "STARTPROG", "ENDPROG", "NEWLINE", "ACCESSMOD", "TYPE", 
      "BOOL", "ID", "INT", "FLOAT", "STRING", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,48,357,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,5,0,48,8,0,10,0,12,0,51,9,0,1,0,5,0,54,8,0,10,0,12,0,
  	57,9,0,1,0,5,0,60,8,0,10,0,12,0,63,9,0,1,0,5,0,66,8,0,10,0,12,0,69,9,
  	0,1,0,1,0,1,1,1,1,1,1,1,1,3,1,77,8,1,1,1,1,1,1,1,1,1,1,1,5,1,84,8,1,10,
  	1,12,1,87,9,1,1,1,3,1,90,8,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,3,1,3,1,3,1,3,5,3,106,8,3,10,3,12,3,109,9,3,1,3,1,3,1,3,1,4,1,4,1,4,
  	1,4,5,4,118,8,4,10,4,12,4,121,9,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,3,5,130,
  	8,5,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,5,7,141,8,7,10,7,12,7,144,9,7,
  	1,8,1,8,1,8,1,8,1,9,1,9,1,9,5,9,153,8,9,10,9,12,9,156,9,9,1,9,1,9,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,1,10,
  	1,10,1,10,1,10,1,10,1,10,1,10,3,10,181,8,10,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,3,11,194,8,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,3,11,207,8,11,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,3,12,231,8,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,
  	1,15,1,15,5,15,243,8,15,10,15,12,15,246,9,15,1,15,3,15,249,8,15,1,15,
  	1,15,1,16,1,16,1,16,5,16,256,8,16,10,16,12,16,259,9,16,1,17,1,17,1,17,
  	1,17,5,17,265,8,17,10,17,12,17,268,9,17,1,17,1,17,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,301,8,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,5,18,315,
  	8,18,10,18,12,18,318,9,18,1,19,1,19,1,19,1,19,5,19,324,8,19,10,19,12,
  	19,327,9,19,1,19,1,19,1,20,1,20,1,20,1,20,5,20,335,8,20,10,20,12,20,338,
  	9,20,1,20,1,20,1,21,1,21,1,21,3,21,345,8,21,1,21,1,21,1,22,1,22,1,22,
  	5,22,352,8,22,10,22,12,22,355,9,22,1,22,0,1,36,23,0,2,4,6,8,10,12,14,
  	16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,0,4,1,0,24,25,1,0,26,27,
  	1,0,28,33,1,0,34,36,381,0,49,1,0,0,0,2,72,1,0,0,0,4,94,1,0,0,0,6,101,
  	1,0,0,0,8,113,1,0,0,0,10,129,1,0,0,0,12,131,1,0,0,0,14,135,1,0,0,0,16,
  	145,1,0,0,0,18,149,1,0,0,0,20,180,1,0,0,0,22,206,1,0,0,0,24,230,1,0,0,
  	0,26,232,1,0,0,0,28,235,1,0,0,0,30,238,1,0,0,0,32,252,1,0,0,0,34,260,
  	1,0,0,0,36,300,1,0,0,0,38,319,1,0,0,0,40,330,1,0,0,0,42,341,1,0,0,0,44,
  	348,1,0,0,0,46,48,3,4,2,0,47,46,1,0,0,0,48,51,1,0,0,0,49,47,1,0,0,0,49,
  	50,1,0,0,0,50,55,1,0,0,0,51,49,1,0,0,0,52,54,3,6,3,0,53,52,1,0,0,0,54,
  	57,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,61,1,0,0,0,57,55,1,0,0,0,58,
  	60,3,8,4,0,59,58,1,0,0,0,60,63,1,0,0,0,61,59,1,0,0,0,61,62,1,0,0,0,62,
  	67,1,0,0,0,63,61,1,0,0,0,64,66,3,2,1,0,65,64,1,0,0,0,66,69,1,0,0,0,67,
  	65,1,0,0,0,67,68,1,0,0,0,68,70,1,0,0,0,69,67,1,0,0,0,70,71,3,18,9,0,71,
  	1,1,0,0,0,72,73,5,1,0,0,73,74,5,44,0,0,74,76,5,2,0,0,75,77,3,14,7,0,76,
  	75,1,0,0,0,76,77,1,0,0,0,77,78,1,0,0,0,78,79,5,3,0,0,79,80,5,4,0,0,80,
  	81,5,42,0,0,81,85,5,40,0,0,82,84,3,20,10,0,83,82,1,0,0,0,84,87,1,0,0,
  	0,85,83,1,0,0,0,85,86,1,0,0,0,86,89,1,0,0,0,87,85,1,0,0,0,88,90,3,16,
  	8,0,89,88,1,0,0,0,89,90,1,0,0,0,90,91,1,0,0,0,91,92,5,5,0,0,92,93,5,40,
  	0,0,93,3,1,0,0,0,94,95,5,6,0,0,95,96,5,42,0,0,96,97,5,44,0,0,97,98,5,
  	7,0,0,98,99,3,36,18,0,99,100,5,40,0,0,100,5,1,0,0,0,101,102,5,8,0,0,102,
  	103,5,44,0,0,103,107,5,40,0,0,104,106,3,12,6,0,105,104,1,0,0,0,106,109,
  	1,0,0,0,107,105,1,0,0,0,107,108,1,0,0,0,108,110,1,0,0,0,109,107,1,0,0,
  	0,110,111,5,5,0,0,111,112,5,40,0,0,112,7,1,0,0,0,113,114,5,9,0,0,114,
  	115,5,44,0,0,115,119,5,40,0,0,116,118,3,10,5,0,117,116,1,0,0,0,118,121,
  	1,0,0,0,119,117,1,0,0,0,119,120,1,0,0,0,120,122,1,0,0,0,121,119,1,0,0,
  	0,122,123,5,5,0,0,123,124,5,40,0,0,124,9,1,0,0,0,125,126,5,41,0,0,126,
  	130,3,12,6,0,127,128,5,41,0,0,128,130,3,2,1,0,129,125,1,0,0,0,129,127,
  	1,0,0,0,130,11,1,0,0,0,131,132,5,42,0,0,132,133,5,44,0,0,133,134,5,40,
  	0,0,134,13,1,0,0,0,135,136,5,42,0,0,136,142,5,44,0,0,137,138,5,10,0,0,
  	138,139,5,42,0,0,139,141,5,44,0,0,140,137,1,0,0,0,141,144,1,0,0,0,142,
  	140,1,0,0,0,142,143,1,0,0,0,143,15,1,0,0,0,144,142,1,0,0,0,145,146,5,
  	11,0,0,146,147,3,36,18,0,147,148,5,40,0,0,148,17,1,0,0,0,149,150,5,38,
  	0,0,150,154,5,40,0,0,151,153,3,20,10,0,152,151,1,0,0,0,153,156,1,0,0,
  	0,154,152,1,0,0,0,154,155,1,0,0,0,155,157,1,0,0,0,156,154,1,0,0,0,157,
  	158,5,39,0,0,158,19,1,0,0,0,159,160,3,22,11,0,160,161,5,40,0,0,161,181,
  	1,0,0,0,162,163,3,24,12,0,163,164,5,40,0,0,164,181,1,0,0,0,165,166,3,
  	26,13,0,166,167,5,40,0,0,167,181,1,0,0,0,168,169,3,28,14,0,169,170,5,
  	40,0,0,170,181,1,0,0,0,171,172,3,36,18,0,172,173,5,40,0,0,173,181,1,0,
  	0,0,174,175,3,30,15,0,175,176,5,40,0,0,176,181,1,0,0,0,177,178,3,34,17,
  	0,178,179,5,40,0,0,179,181,1,0,0,0,180,159,1,0,0,0,180,162,1,0,0,0,180,
  	165,1,0,0,0,180,168,1,0,0,0,180,171,1,0,0,0,180,174,1,0,0,0,180,177,1,
  	0,0,0,181,21,1,0,0,0,182,183,5,42,0,0,183,184,5,44,0,0,184,185,5,7,0,
  	0,185,207,3,36,18,0,186,187,5,44,0,0,187,188,5,44,0,0,188,189,5,7,0,0,
  	189,190,5,12,0,0,190,191,5,44,0,0,191,193,5,2,0,0,192,194,3,44,22,0,193,
  	192,1,0,0,0,193,194,1,0,0,0,194,195,1,0,0,0,195,207,5,3,0,0,196,197,5,
  	42,0,0,197,198,5,13,0,0,198,199,5,44,0,0,199,200,5,7,0,0,200,207,3,38,
  	19,0,201,202,5,42,0,0,202,203,5,14,0,0,203,204,5,44,0,0,204,205,5,7,0,
  	0,205,207,3,40,20,0,206,182,1,0,0,0,206,186,1,0,0,0,206,196,1,0,0,0,206,
  	201,1,0,0,0,207,23,1,0,0,0,208,209,5,44,0,0,209,210,5,7,0,0,210,231,3,
  	36,18,0,211,212,5,44,0,0,212,213,5,15,0,0,213,214,5,44,0,0,214,215,5,
  	7,0,0,215,231,3,36,18,0,216,217,5,44,0,0,217,218,5,16,0,0,218,219,5,45,
  	0,0,219,220,5,17,0,0,220,221,5,7,0,0,221,231,3,36,18,0,222,223,5,44,0,
  	0,223,224,5,16,0,0,224,225,5,45,0,0,225,226,5,18,0,0,226,227,5,45,0,0,
  	227,228,5,17,0,0,228,229,5,7,0,0,229,231,3,36,18,0,230,208,1,0,0,0,230,
  	211,1,0,0,0,230,216,1,0,0,0,230,222,1,0,0,0,231,25,1,0,0,0,232,233,5,
  	19,0,0,233,234,3,36,18,0,234,27,1,0,0,0,235,236,5,20,0,0,236,237,5,44,
  	0,0,237,29,1,0,0,0,238,239,5,21,0,0,239,240,3,36,18,0,240,244,5,40,0,
  	0,241,243,3,20,10,0,242,241,1,0,0,0,243,246,1,0,0,0,244,242,1,0,0,0,244,
  	245,1,0,0,0,245,248,1,0,0,0,246,244,1,0,0,0,247,249,3,32,16,0,248,247,
  	1,0,0,0,248,249,1,0,0,0,249,250,1,0,0,0,250,251,5,5,0,0,251,31,1,0,0,
  	0,252,253,5,22,0,0,253,257,5,40,0,0,254,256,3,20,10,0,255,254,1,0,0,0,
  	256,259,1,0,0,0,257,255,1,0,0,0,257,258,1,0,0,0,258,33,1,0,0,0,259,257,
  	1,0,0,0,260,261,5,23,0,0,261,262,3,36,18,0,262,266,5,40,0,0,263,265,3,
  	20,10,0,264,263,1,0,0,0,265,268,1,0,0,0,266,264,1,0,0,0,266,267,1,0,0,
  	0,267,269,1,0,0,0,268,266,1,0,0,0,269,270,5,5,0,0,270,35,1,0,0,0,271,
  	272,6,18,-1,0,272,273,5,37,0,0,273,301,3,36,18,12,274,301,5,45,0,0,275,
  	301,5,46,0,0,276,301,5,43,0,0,277,301,5,47,0,0,278,301,5,44,0,0,279,301,
  	3,42,21,0,280,281,5,2,0,0,281,282,3,36,18,0,282,283,5,3,0,0,283,301,1,
  	0,0,0,284,285,5,44,0,0,285,286,5,16,0,0,286,287,5,45,0,0,287,301,5,17,
  	0,0,288,289,5,44,0,0,289,290,5,16,0,0,290,291,5,45,0,0,291,292,5,18,0,
  	0,292,293,5,45,0,0,293,301,5,17,0,0,294,295,5,44,0,0,295,296,5,15,0,0,
  	296,301,5,44,0,0,297,298,5,44,0,0,298,299,5,15,0,0,299,301,3,42,21,0,
  	300,271,1,0,0,0,300,274,1,0,0,0,300,275,1,0,0,0,300,276,1,0,0,0,300,277,
  	1,0,0,0,300,278,1,0,0,0,300,279,1,0,0,0,300,280,1,0,0,0,300,284,1,0,0,
  	0,300,288,1,0,0,0,300,294,1,0,0,0,300,297,1,0,0,0,301,316,1,0,0,0,302,
  	303,10,16,0,0,303,304,7,0,0,0,304,315,3,36,18,17,305,306,10,15,0,0,306,
  	307,7,1,0,0,307,315,3,36,18,16,308,309,10,14,0,0,309,310,7,2,0,0,310,
  	315,3,36,18,15,311,312,10,13,0,0,312,313,7,3,0,0,313,315,3,36,18,14,314,
  	302,1,0,0,0,314,305,1,0,0,0,314,308,1,0,0,0,314,311,1,0,0,0,315,318,1,
  	0,0,0,316,314,1,0,0,0,316,317,1,0,0,0,317,37,1,0,0,0,318,316,1,0,0,0,
  	319,320,5,16,0,0,320,325,3,36,18,0,321,322,5,10,0,0,322,324,3,36,18,0,
  	323,321,1,0,0,0,324,327,1,0,0,0,325,323,1,0,0,0,325,326,1,0,0,0,326,328,
  	1,0,0,0,327,325,1,0,0,0,328,329,5,17,0,0,329,39,1,0,0,0,330,331,5,16,
  	0,0,331,336,3,38,19,0,332,333,5,10,0,0,333,335,3,38,19,0,334,332,1,0,
  	0,0,335,338,1,0,0,0,336,334,1,0,0,0,336,337,1,0,0,0,337,339,1,0,0,0,338,
  	336,1,0,0,0,339,340,5,17,0,0,340,41,1,0,0,0,341,342,5,44,0,0,342,344,
  	5,2,0,0,343,345,3,44,22,0,344,343,1,0,0,0,344,345,1,0,0,0,345,346,1,0,
  	0,0,346,347,5,3,0,0,347,43,1,0,0,0,348,353,3,36,18,0,349,350,5,10,0,0,
  	350,352,3,36,18,0,351,349,1,0,0,0,352,355,1,0,0,0,353,351,1,0,0,0,353,
  	354,1,0,0,0,354,45,1,0,0,0,355,353,1,0,0,0,27,49,55,61,67,76,85,89,107,
  	119,129,142,154,180,193,206,230,244,248,257,266,300,314,316,325,336,344,
  	353
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

std::vector<KiepskiLangParser::GlobalVarDeclContext *> KiepskiLangParser::ProgramContext::globalVarDecl() {
  return getRuleContexts<KiepskiLangParser::GlobalVarDeclContext>();
}

KiepskiLangParser::GlobalVarDeclContext* KiepskiLangParser::ProgramContext::globalVarDecl(size_t i) {
  return getRuleContext<KiepskiLangParser::GlobalVarDeclContext>(i);
}

std::vector<KiepskiLangParser::StructDeclContext *> KiepskiLangParser::ProgramContext::structDecl() {
  return getRuleContexts<KiepskiLangParser::StructDeclContext>();
}

KiepskiLangParser::StructDeclContext* KiepskiLangParser::ProgramContext::structDecl(size_t i) {
  return getRuleContext<KiepskiLangParser::StructDeclContext>(i);
}

std::vector<KiepskiLangParser::ClassDeclContext *> KiepskiLangParser::ProgramContext::classDecl() {
  return getRuleContexts<KiepskiLangParser::ClassDeclContext>();
}

KiepskiLangParser::ClassDeclContext* KiepskiLangParser::ProgramContext::classDecl(size_t i) {
  return getRuleContext<KiepskiLangParser::ClassDeclContext>(i);
}

std::vector<KiepskiLangParser::FunctionDeclContext *> KiepskiLangParser::ProgramContext::functionDecl() {
  return getRuleContexts<KiepskiLangParser::FunctionDeclContext>();
}

KiepskiLangParser::FunctionDeclContext* KiepskiLangParser::ProgramContext::functionDecl(size_t i) {
  return getRuleContext<KiepskiLangParser::FunctionDeclContext>(i);
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
    setState(49);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__5) {
      setState(46);
      globalVarDecl();
      setState(51);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(55);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__7) {
      setState(52);
      structDecl();
      setState(57);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__8) {
      setState(58);
      classDecl();
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(67);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__0) {
      setState(64);
      functionDecl();
      setState(69);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(70);
    start();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDeclContext ------------------------------------------------------------------

KiepskiLangParser::FunctionDeclContext::FunctionDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KiepskiLangParser::FunctionDeclContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

tree::TerminalNode* KiepskiLangParser::FunctionDeclContext::TYPE() {
  return getToken(KiepskiLangParser::TYPE, 0);
}

std::vector<tree::TerminalNode *> KiepskiLangParser::FunctionDeclContext::NEWLINE() {
  return getTokens(KiepskiLangParser::NEWLINE);
}

tree::TerminalNode* KiepskiLangParser::FunctionDeclContext::NEWLINE(size_t i) {
  return getToken(KiepskiLangParser::NEWLINE, i);
}

KiepskiLangParser::ParamListContext* KiepskiLangParser::FunctionDeclContext::paramList() {
  return getRuleContext<KiepskiLangParser::ParamListContext>(0);
}

std::vector<KiepskiLangParser::StatementContext *> KiepskiLangParser::FunctionDeclContext::statement() {
  return getRuleContexts<KiepskiLangParser::StatementContext>();
}

KiepskiLangParser::StatementContext* KiepskiLangParser::FunctionDeclContext::statement(size_t i) {
  return getRuleContext<KiepskiLangParser::StatementContext>(i);
}

KiepskiLangParser::ReturnStatementContext* KiepskiLangParser::FunctionDeclContext::returnStatement() {
  return getRuleContext<KiepskiLangParser::ReturnStatementContext>(0);
}


size_t KiepskiLangParser::FunctionDeclContext::getRuleIndex() const {
  return KiepskiLangParser::RuleFunctionDecl;
}

void KiepskiLangParser::FunctionDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDecl(this);
}

void KiepskiLangParser::FunctionDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDecl(this);
}


std::any KiepskiLangParser::FunctionDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitFunctionDecl(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::FunctionDeclContext* KiepskiLangParser::functionDecl() {
  FunctionDeclContext *_localctx = _tracker.createInstance<FunctionDeclContext>(_ctx, getState());
  enterRule(_localctx, 2, KiepskiLangParser::RuleFunctionDecl);
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
    setState(72);
    match(KiepskiLangParser::T__0);
    setState(73);
    match(KiepskiLangParser::ID);
    setState(74);
    match(KiepskiLangParser::T__1);
    setState(76);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KiepskiLangParser::TYPE) {
      setState(75);
      paramList();
    }
    setState(78);
    match(KiepskiLangParser::T__2);
    setState(79);
    match(KiepskiLangParser::T__3);
    setState(80);
    match(KiepskiLangParser::TYPE);
    setState(81);
    match(KiepskiLangParser::NEWLINE);
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 277214381211652) != 0)) {
      setState(82);
      statement();
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(89);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KiepskiLangParser::T__10) {
      setState(88);
      returnStatement();
    }
    setState(91);
    match(KiepskiLangParser::T__4);
    setState(92);
    match(KiepskiLangParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalVarDeclContext ------------------------------------------------------------------

KiepskiLangParser::GlobalVarDeclContext::GlobalVarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KiepskiLangParser::GlobalVarDeclContext::TYPE() {
  return getToken(KiepskiLangParser::TYPE, 0);
}

tree::TerminalNode* KiepskiLangParser::GlobalVarDeclContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

KiepskiLangParser::ExprContext* KiepskiLangParser::GlobalVarDeclContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}

tree::TerminalNode* KiepskiLangParser::GlobalVarDeclContext::NEWLINE() {
  return getToken(KiepskiLangParser::NEWLINE, 0);
}


size_t KiepskiLangParser::GlobalVarDeclContext::getRuleIndex() const {
  return KiepskiLangParser::RuleGlobalVarDecl;
}

void KiepskiLangParser::GlobalVarDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalVarDecl(this);
}

void KiepskiLangParser::GlobalVarDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalVarDecl(this);
}


std::any KiepskiLangParser::GlobalVarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitGlobalVarDecl(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::GlobalVarDeclContext* KiepskiLangParser::globalVarDecl() {
  GlobalVarDeclContext *_localctx = _tracker.createInstance<GlobalVarDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, KiepskiLangParser::RuleGlobalVarDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    match(KiepskiLangParser::T__5);
    setState(95);
    match(KiepskiLangParser::TYPE);
    setState(96);
    match(KiepskiLangParser::ID);
    setState(97);
    match(KiepskiLangParser::T__6);
    setState(98);
    expr(0);
    setState(99);
    match(KiepskiLangParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StructDeclContext ------------------------------------------------------------------

KiepskiLangParser::StructDeclContext::StructDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KiepskiLangParser::StructDeclContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

std::vector<tree::TerminalNode *> KiepskiLangParser::StructDeclContext::NEWLINE() {
  return getTokens(KiepskiLangParser::NEWLINE);
}

tree::TerminalNode* KiepskiLangParser::StructDeclContext::NEWLINE(size_t i) {
  return getToken(KiepskiLangParser::NEWLINE, i);
}

std::vector<KiepskiLangParser::VarInitContext *> KiepskiLangParser::StructDeclContext::varInit() {
  return getRuleContexts<KiepskiLangParser::VarInitContext>();
}

KiepskiLangParser::VarInitContext* KiepskiLangParser::StructDeclContext::varInit(size_t i) {
  return getRuleContext<KiepskiLangParser::VarInitContext>(i);
}


size_t KiepskiLangParser::StructDeclContext::getRuleIndex() const {
  return KiepskiLangParser::RuleStructDecl;
}

void KiepskiLangParser::StructDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructDecl(this);
}

void KiepskiLangParser::StructDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructDecl(this);
}


std::any KiepskiLangParser::StructDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitStructDecl(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::StructDeclContext* KiepskiLangParser::structDecl() {
  StructDeclContext *_localctx = _tracker.createInstance<StructDeclContext>(_ctx, getState());
  enterRule(_localctx, 6, KiepskiLangParser::RuleStructDecl);
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
    setState(101);
    match(KiepskiLangParser::T__7);
    setState(102);
    match(KiepskiLangParser::ID);
    setState(103);
    match(KiepskiLangParser::NEWLINE);
    setState(107);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::TYPE) {
      setState(104);
      varInit();
      setState(109);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(110);
    match(KiepskiLangParser::T__4);
    setState(111);
    match(KiepskiLangParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDeclContext ------------------------------------------------------------------

KiepskiLangParser::ClassDeclContext::ClassDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KiepskiLangParser::ClassDeclContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

std::vector<tree::TerminalNode *> KiepskiLangParser::ClassDeclContext::NEWLINE() {
  return getTokens(KiepskiLangParser::NEWLINE);
}

tree::TerminalNode* KiepskiLangParser::ClassDeclContext::NEWLINE(size_t i) {
  return getToken(KiepskiLangParser::NEWLINE, i);
}

std::vector<KiepskiLangParser::ClassMemberContext *> KiepskiLangParser::ClassDeclContext::classMember() {
  return getRuleContexts<KiepskiLangParser::ClassMemberContext>();
}

KiepskiLangParser::ClassMemberContext* KiepskiLangParser::ClassDeclContext::classMember(size_t i) {
  return getRuleContext<KiepskiLangParser::ClassMemberContext>(i);
}


size_t KiepskiLangParser::ClassDeclContext::getRuleIndex() const {
  return KiepskiLangParser::RuleClassDecl;
}

void KiepskiLangParser::ClassDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassDecl(this);
}

void KiepskiLangParser::ClassDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassDecl(this);
}


std::any KiepskiLangParser::ClassDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitClassDecl(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::ClassDeclContext* KiepskiLangParser::classDecl() {
  ClassDeclContext *_localctx = _tracker.createInstance<ClassDeclContext>(_ctx, getState());
  enterRule(_localctx, 8, KiepskiLangParser::RuleClassDecl);
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
    setState(113);
    match(KiepskiLangParser::T__8);
    setState(114);
    match(KiepskiLangParser::ID);
    setState(115);
    match(KiepskiLangParser::NEWLINE);
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::ACCESSMOD) {
      setState(116);
      classMember();
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(122);
    match(KiepskiLangParser::T__4);
    setState(123);
    match(KiepskiLangParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassMemberContext ------------------------------------------------------------------

KiepskiLangParser::ClassMemberContext::ClassMemberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t KiepskiLangParser::ClassMemberContext::getRuleIndex() const {
  return KiepskiLangParser::RuleClassMember;
}

void KiepskiLangParser::ClassMemberContext::copyFrom(ClassMemberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ClassMethodContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::ClassMethodContext::ACCESSMOD() {
  return getToken(KiepskiLangParser::ACCESSMOD, 0);
}

KiepskiLangParser::FunctionDeclContext* KiepskiLangParser::ClassMethodContext::functionDecl() {
  return getRuleContext<KiepskiLangParser::FunctionDeclContext>(0);
}

KiepskiLangParser::ClassMethodContext::ClassMethodContext(ClassMemberContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::ClassMethodContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassMethod(this);
}
void KiepskiLangParser::ClassMethodContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassMethod(this);
}

std::any KiepskiLangParser::ClassMethodContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitClassMethod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ClassFieldContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::ClassFieldContext::ACCESSMOD() {
  return getToken(KiepskiLangParser::ACCESSMOD, 0);
}

KiepskiLangParser::VarInitContext* KiepskiLangParser::ClassFieldContext::varInit() {
  return getRuleContext<KiepskiLangParser::VarInitContext>(0);
}

KiepskiLangParser::ClassFieldContext::ClassFieldContext(ClassMemberContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::ClassFieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassField(this);
}
void KiepskiLangParser::ClassFieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassField(this);
}

std::any KiepskiLangParser::ClassFieldContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitClassField(this);
  else
    return visitor->visitChildren(this);
}
KiepskiLangParser::ClassMemberContext* KiepskiLangParser::classMember() {
  ClassMemberContext *_localctx = _tracker.createInstance<ClassMemberContext>(_ctx, getState());
  enterRule(_localctx, 10, KiepskiLangParser::RuleClassMember);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(129);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ClassFieldContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(125);
      match(KiepskiLangParser::ACCESSMOD);
      setState(126);
      varInit();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ClassMethodContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(127);
      match(KiepskiLangParser::ACCESSMOD);
      setState(128);
      functionDecl();
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

//----------------- VarInitContext ------------------------------------------------------------------

KiepskiLangParser::VarInitContext::VarInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KiepskiLangParser::VarInitContext::TYPE() {
  return getToken(KiepskiLangParser::TYPE, 0);
}

tree::TerminalNode* KiepskiLangParser::VarInitContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

tree::TerminalNode* KiepskiLangParser::VarInitContext::NEWLINE() {
  return getToken(KiepskiLangParser::NEWLINE, 0);
}


size_t KiepskiLangParser::VarInitContext::getRuleIndex() const {
  return KiepskiLangParser::RuleVarInit;
}

void KiepskiLangParser::VarInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarInit(this);
}

void KiepskiLangParser::VarInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarInit(this);
}


std::any KiepskiLangParser::VarInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitVarInit(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::VarInitContext* KiepskiLangParser::varInit() {
  VarInitContext *_localctx = _tracker.createInstance<VarInitContext>(_ctx, getState());
  enterRule(_localctx, 12, KiepskiLangParser::RuleVarInit);

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
    match(KiepskiLangParser::TYPE);
    setState(132);
    match(KiepskiLangParser::ID);
    setState(133);
    match(KiepskiLangParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

KiepskiLangParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> KiepskiLangParser::ParamListContext::TYPE() {
  return getTokens(KiepskiLangParser::TYPE);
}

tree::TerminalNode* KiepskiLangParser::ParamListContext::TYPE(size_t i) {
  return getToken(KiepskiLangParser::TYPE, i);
}

std::vector<tree::TerminalNode *> KiepskiLangParser::ParamListContext::ID() {
  return getTokens(KiepskiLangParser::ID);
}

tree::TerminalNode* KiepskiLangParser::ParamListContext::ID(size_t i) {
  return getToken(KiepskiLangParser::ID, i);
}


size_t KiepskiLangParser::ParamListContext::getRuleIndex() const {
  return KiepskiLangParser::RuleParamList;
}

void KiepskiLangParser::ParamListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParamList(this);
}

void KiepskiLangParser::ParamListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParamList(this);
}


std::any KiepskiLangParser::ParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitParamList(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::ParamListContext* KiepskiLangParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 14, KiepskiLangParser::RuleParamList);
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
    setState(135);
    match(KiepskiLangParser::TYPE);
    setState(136);
    match(KiepskiLangParser::ID);
    setState(142);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__9) {
      setState(137);
      match(KiepskiLangParser::T__9);
      setState(138);
      match(KiepskiLangParser::TYPE);
      setState(139);
      match(KiepskiLangParser::ID);
      setState(144);
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

//----------------- ReturnStatementContext ------------------------------------------------------------------

KiepskiLangParser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

KiepskiLangParser::ExprContext* KiepskiLangParser::ReturnStatementContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}

tree::TerminalNode* KiepskiLangParser::ReturnStatementContext::NEWLINE() {
  return getToken(KiepskiLangParser::NEWLINE, 0);
}


size_t KiepskiLangParser::ReturnStatementContext::getRuleIndex() const {
  return KiepskiLangParser::RuleReturnStatement;
}

void KiepskiLangParser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void KiepskiLangParser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}


std::any KiepskiLangParser::ReturnStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitReturnStatement(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::ReturnStatementContext* KiepskiLangParser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, KiepskiLangParser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(145);
    match(KiepskiLangParser::T__10);
    setState(146);
    expr(0);
    setState(147);
    match(KiepskiLangParser::NEWLINE);
   
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
  enterRule(_localctx, 18, KiepskiLangParser::RuleStart);
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
    setState(149);
    match(KiepskiLangParser::STARTPROG);
    setState(150);
    match(KiepskiLangParser::NEWLINE);
    setState(154);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 277214381211652) != 0)) {
      setState(151);
      statement();
      setState(156);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(157);
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
  enterRule(_localctx, 20, KiepskiLangParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(180);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(159);
      varDecl();
      setState(160);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(162);
      varAssign();
      setState(163);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(165);
      print();
      setState(166);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(168);
      read();
      setState(169);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(171);
      expr(0);
      setState(172);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(174);
      ifStatement();
      setState(175);
      match(KiepskiLangParser::NEWLINE);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(177);
      whileStatement();
      setState(178);
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

//----------------- ObjectInstanceDeclContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> KiepskiLangParser::ObjectInstanceDeclContext::ID() {
  return getTokens(KiepskiLangParser::ID);
}

tree::TerminalNode* KiepskiLangParser::ObjectInstanceDeclContext::ID(size_t i) {
  return getToken(KiepskiLangParser::ID, i);
}

KiepskiLangParser::ArgListContext* KiepskiLangParser::ObjectInstanceDeclContext::argList() {
  return getRuleContext<KiepskiLangParser::ArgListContext>(0);
}

KiepskiLangParser::ObjectInstanceDeclContext::ObjectInstanceDeclContext(VarDeclContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::ObjectInstanceDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObjectInstanceDecl(this);
}
void KiepskiLangParser::ObjectInstanceDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObjectInstanceDecl(this);
}

std::any KiepskiLangParser::ObjectInstanceDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitObjectInstanceDecl(this);
  else
    return visitor->visitChildren(this);
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
  enterRule(_localctx, 22, KiepskiLangParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(206);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ScalarDeclContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(182);
      match(KiepskiLangParser::TYPE);
      setState(183);
      match(KiepskiLangParser::ID);
      setState(184);
      match(KiepskiLangParser::T__6);
      setState(185);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ObjectInstanceDeclContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(186);
      match(KiepskiLangParser::ID);
      setState(187);
      match(KiepskiLangParser::ID);
      setState(188);
      match(KiepskiLangParser::T__6);
      setState(189);
      match(KiepskiLangParser::T__11);
      setState(190);
      match(KiepskiLangParser::ID);
      setState(191);
      match(KiepskiLangParser::T__1);
      setState(193);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 272816322641924) != 0)) {
        setState(192);
        argList();
      }
      setState(195);
      match(KiepskiLangParser::T__2);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ArrayDeclContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(196);
      match(KiepskiLangParser::TYPE);
      setState(197);
      match(KiepskiLangParser::T__12);
      setState(198);
      match(KiepskiLangParser::ID);
      setState(199);
      match(KiepskiLangParser::T__6);
      setState(200);
      arrayInit();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<KiepskiLangParser::MatrixDeclContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(201);
      match(KiepskiLangParser::TYPE);
      setState(202);
      match(KiepskiLangParser::T__13);
      setState(203);
      match(KiepskiLangParser::ID);
      setState(204);
      match(KiepskiLangParser::T__6);
      setState(205);
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
//----------------- FieldAssignContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> KiepskiLangParser::FieldAssignContext::ID() {
  return getTokens(KiepskiLangParser::ID);
}

tree::TerminalNode* KiepskiLangParser::FieldAssignContext::ID(size_t i) {
  return getToken(KiepskiLangParser::ID, i);
}

KiepskiLangParser::ExprContext* KiepskiLangParser::FieldAssignContext::expr() {
  return getRuleContext<KiepskiLangParser::ExprContext>(0);
}

KiepskiLangParser::FieldAssignContext::FieldAssignContext(VarAssignContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::FieldAssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldAssign(this);
}
void KiepskiLangParser::FieldAssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldAssign(this);
}

std::any KiepskiLangParser::FieldAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitFieldAssign(this);
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
  enterRule(_localctx, 24, KiepskiLangParser::RuleVarAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(230);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<KiepskiLangParser::VariableAssignContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(208);
      match(KiepskiLangParser::ID);
      setState(209);
      match(KiepskiLangParser::T__6);
      setState(210);
      expr(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<KiepskiLangParser::FieldAssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(211);
      match(KiepskiLangParser::ID);
      setState(212);
      match(KiepskiLangParser::T__14);
      setState(213);
      match(KiepskiLangParser::ID);
      setState(214);
      match(KiepskiLangParser::T__6);
      setState(215);
      expr(0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<KiepskiLangParser::ArrayAssignContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(216);
      match(KiepskiLangParser::ID);
      setState(217);
      match(KiepskiLangParser::T__15);
      setState(218);
      match(KiepskiLangParser::INT);
      setState(219);
      match(KiepskiLangParser::T__16);
      setState(220);
      match(KiepskiLangParser::T__6);
      setState(221);
      expr(0);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<KiepskiLangParser::MatrixAssignContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(222);
      match(KiepskiLangParser::ID);
      setState(223);
      match(KiepskiLangParser::T__15);
      setState(224);
      match(KiepskiLangParser::INT);
      setState(225);
      match(KiepskiLangParser::T__17);
      setState(226);
      match(KiepskiLangParser::INT);
      setState(227);
      match(KiepskiLangParser::T__16);
      setState(228);
      match(KiepskiLangParser::T__6);
      setState(229);
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
  enterRule(_localctx, 26, KiepskiLangParser::RulePrint);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(KiepskiLangParser::T__18);
    setState(233);
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
  enterRule(_localctx, 28, KiepskiLangParser::RuleRead);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(235);
    match(KiepskiLangParser::T__19);
    setState(236);
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
  enterRule(_localctx, 30, KiepskiLangParser::RuleIfStatement);
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
    setState(238);
    match(KiepskiLangParser::T__20);
    setState(239);
    expr(0);
    setState(240);
    match(KiepskiLangParser::NEWLINE);
    setState(244);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 277214381211652) != 0)) {
      setState(241);
      statement();
      setState(246);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(248);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == KiepskiLangParser::T__21) {
      setState(247);
      elseBlock();
    }
    setState(250);
    match(KiepskiLangParser::T__4);
   
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
  enterRule(_localctx, 32, KiepskiLangParser::RuleElseBlock);
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
    setState(252);
    match(KiepskiLangParser::T__21);
    setState(253);
    match(KiepskiLangParser::NEWLINE);
    setState(257);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 277214381211652) != 0)) {
      setState(254);
      statement();
      setState(259);
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
  enterRule(_localctx, 34, KiepskiLangParser::RuleWhileStatement);
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
    setState(260);
    match(KiepskiLangParser::T__22);
    setState(261);
    expr(0);
    setState(262);
    match(KiepskiLangParser::NEWLINE);
    setState(266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 277214381211652) != 0)) {
      setState(263);
      statement();
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(269);
    match(KiepskiLangParser::T__4);
   
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

//----------------- FieldAccessExprContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> KiepskiLangParser::FieldAccessExprContext::ID() {
  return getTokens(KiepskiLangParser::ID);
}

tree::TerminalNode* KiepskiLangParser::FieldAccessExprContext::ID(size_t i) {
  return getToken(KiepskiLangParser::ID, i);
}

KiepskiLangParser::FieldAccessExprContext::FieldAccessExprContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::FieldAccessExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldAccessExpr(this);
}
void KiepskiLangParser::FieldAccessExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldAccessExpr(this);
}

std::any KiepskiLangParser::FieldAccessExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitFieldAccessExpr(this);
  else
    return visitor->visitChildren(this);
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
//----------------- MethodCallExprContext ------------------------------------------------------------------

tree::TerminalNode* KiepskiLangParser::MethodCallExprContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

KiepskiLangParser::FunctionCallContext* KiepskiLangParser::MethodCallExprContext::functionCall() {
  return getRuleContext<KiepskiLangParser::FunctionCallContext>(0);
}

KiepskiLangParser::MethodCallExprContext::MethodCallExprContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::MethodCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMethodCallExpr(this);
}
void KiepskiLangParser::MethodCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMethodCallExpr(this);
}

std::any KiepskiLangParser::MethodCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitMethodCallExpr(this);
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
//----------------- FunctionCallExprContext ------------------------------------------------------------------

KiepskiLangParser::FunctionCallContext* KiepskiLangParser::FunctionCallExprContext::functionCall() {
  return getRuleContext<KiepskiLangParser::FunctionCallContext>(0);
}

KiepskiLangParser::FunctionCallExprContext::FunctionCallExprContext(ExprContext *ctx) { copyFrom(ctx); }

void KiepskiLangParser::FunctionCallExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCallExpr(this);
}
void KiepskiLangParser::FunctionCallExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCallExpr(this);
}

std::any KiepskiLangParser::FunctionCallExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitFunctionCallExpr(this);
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
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, KiepskiLangParser::RuleExpr, precedence);

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
    setState(300);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LogicNegExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(272);
      match(KiepskiLangParser::T__36);
      setState(273);
      expr(12);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<IntLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(274);
      match(KiepskiLangParser::INT);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<FloatLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(275);
      match(KiepskiLangParser::FLOAT);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<BoolLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(276);
      match(KiepskiLangParser::BOOL);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<StringLiteralContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(277);
      match(KiepskiLangParser::STRING);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<VarReferenceContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(278);
      match(KiepskiLangParser::ID);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<FunctionCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(279);
      functionCall();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<BracesContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(280);
      match(KiepskiLangParser::T__1);
      setState(281);
      expr(0);
      setState(282);
      match(KiepskiLangParser::T__2);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<ArrayAccessExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(284);
      match(KiepskiLangParser::ID);
      setState(285);
      match(KiepskiLangParser::T__15);
      setState(286);
      match(KiepskiLangParser::INT);
      setState(287);
      match(KiepskiLangParser::T__16);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<MatrixAccessExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(288);
      match(KiepskiLangParser::ID);
      setState(289);
      match(KiepskiLangParser::T__15);
      setState(290);
      match(KiepskiLangParser::INT);
      setState(291);
      match(KiepskiLangParser::T__17);
      setState(292);
      match(KiepskiLangParser::INT);
      setState(293);
      match(KiepskiLangParser::T__16);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<FieldAccessExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(294);
      match(KiepskiLangParser::ID);
      setState(295);
      match(KiepskiLangParser::T__14);
      setState(296);
      match(KiepskiLangParser::ID);
      break;
    }

    case 12: {
      _localctx = _tracker.createInstance<MethodCallExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(297);
      match(KiepskiLangParser::ID);
      setState(298);
      match(KiepskiLangParser::T__14);
      setState(299);
      functionCall();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(316);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(314);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(302);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(303);
          _la = _input->LA(1);
          if (!(_la == KiepskiLangParser::T__23

          || _la == KiepskiLangParser::T__24)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(304);
          expr(17);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(305);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(306);
          _la = _input->LA(1);
          if (!(_la == KiepskiLangParser::T__25

          || _la == KiepskiLangParser::T__26)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(307);
          expr(16);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<ComparisonExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(308);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(309);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 16911433728) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(310);
          expr(15);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<LogicBinaryExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(311);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(312);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 120259084288) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(313);
          expr(14);
          break;
        }

        default:
          break;
        } 
      }
      setState(318);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
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
  enterRule(_localctx, 38, KiepskiLangParser::RuleArrayInit);
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
    setState(319);
    match(KiepskiLangParser::T__15);
    setState(320);
    expr(0);
    setState(325);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__9) {
      setState(321);
      match(KiepskiLangParser::T__9);
      setState(322);
      expr(0);
      setState(327);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(328);
    match(KiepskiLangParser::T__16);
   
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
  enterRule(_localctx, 40, KiepskiLangParser::RuleMatrixInit);
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
    setState(330);
    match(KiepskiLangParser::T__15);
    setState(331);
    arrayInit();
    setState(336);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__9) {
      setState(332);
      match(KiepskiLangParser::T__9);
      setState(333);
      arrayInit();
      setState(338);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(339);
    match(KiepskiLangParser::T__16);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

KiepskiLangParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* KiepskiLangParser::FunctionCallContext::ID() {
  return getToken(KiepskiLangParser::ID, 0);
}

KiepskiLangParser::ArgListContext* KiepskiLangParser::FunctionCallContext::argList() {
  return getRuleContext<KiepskiLangParser::ArgListContext>(0);
}


size_t KiepskiLangParser::FunctionCallContext::getRuleIndex() const {
  return KiepskiLangParser::RuleFunctionCall;
}

void KiepskiLangParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void KiepskiLangParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


std::any KiepskiLangParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::FunctionCallContext* KiepskiLangParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 42, KiepskiLangParser::RuleFunctionCall);
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
    setState(341);
    match(KiepskiLangParser::ID);
    setState(342);
    match(KiepskiLangParser::T__1);
    setState(344);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 272816322641924) != 0)) {
      setState(343);
      argList();
    }
    setState(346);
    match(KiepskiLangParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgListContext ------------------------------------------------------------------

KiepskiLangParser::ArgListContext::ArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<KiepskiLangParser::ExprContext *> KiepskiLangParser::ArgListContext::expr() {
  return getRuleContexts<KiepskiLangParser::ExprContext>();
}

KiepskiLangParser::ExprContext* KiepskiLangParser::ArgListContext::expr(size_t i) {
  return getRuleContext<KiepskiLangParser::ExprContext>(i);
}


size_t KiepskiLangParser::ArgListContext::getRuleIndex() const {
  return KiepskiLangParser::RuleArgList;
}

void KiepskiLangParser::ArgListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgList(this);
}

void KiepskiLangParser::ArgListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<KiepskiLangListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgList(this);
}


std::any KiepskiLangParser::ArgListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<KiepskiLangVisitor*>(visitor))
    return parserVisitor->visitArgList(this);
  else
    return visitor->visitChildren(this);
}

KiepskiLangParser::ArgListContext* KiepskiLangParser::argList() {
  ArgListContext *_localctx = _tracker.createInstance<ArgListContext>(_ctx, getState());
  enterRule(_localctx, 44, KiepskiLangParser::RuleArgList);
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
    setState(348);
    expr(0);
    setState(353);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == KiepskiLangParser::T__9) {
      setState(349);
      match(KiepskiLangParser::T__9);
      setState(350);
      expr(0);
      setState(355);
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

bool KiepskiLangParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 18: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool KiepskiLangParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 16);
    case 1: return precpred(_ctx, 15);
    case 2: return precpred(_ctx, 14);
    case 3: return precpred(_ctx, 13);

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
