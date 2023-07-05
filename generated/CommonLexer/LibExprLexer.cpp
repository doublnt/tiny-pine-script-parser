
// Generated from .\LibExpr.g4 by ANTLR 4.13.0


#include "LibExprLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct LibExprLexerStaticData final {
  LibExprLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LibExprLexerStaticData(const LibExprLexerStaticData&) = delete;
  LibExprLexerStaticData(LibExprLexerStaticData&&) = delete;
  LibExprLexerStaticData& operator=(const LibExprLexerStaticData&) = delete;
  LibExprLexerStaticData& operator=(LibExprLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag libexprlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LibExprLexerStaticData *libexprlexerLexerStaticData = nullptr;

void libexprlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (libexprlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(libexprlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LibExprLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "ID", "INT", "NEWLINE", "WS", "MUL", "DIV", "ADD", 
      "SUB", "LEFT_BRACKET", "RIGHT_BRACKET"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "';'", "'='", "", "", "", "", "'*'", "'/'", "'+'", "'-'", "'('", 
      "')'"
    },
    std::vector<std::string>{
      "", "", "", "ID", "INT", "NEWLINE", "WS", "MUL", "DIV", "ADD", "SUB", 
      "LEFT_BRACKET", "RIGHT_BRACKET"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,12,63,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,1,0,1,0,1,1,1,1,1,2,4,2,
  	31,8,2,11,2,12,2,32,1,3,4,3,36,8,3,11,3,12,3,37,1,4,3,4,41,8,4,1,4,1,
  	4,1,5,4,5,46,8,5,11,5,12,5,47,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,
  	1,10,1,10,1,11,1,11,0,0,12,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,
  	10,21,11,23,12,1,0,3,2,0,65,90,97,122,1,0,48,57,2,0,9,9,32,32,66,0,1,
  	1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,
  	0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,0,23,
  	1,0,0,0,1,25,1,0,0,0,3,27,1,0,0,0,5,30,1,0,0,0,7,35,1,0,0,0,9,40,1,0,
  	0,0,11,45,1,0,0,0,13,51,1,0,0,0,15,53,1,0,0,0,17,55,1,0,0,0,19,57,1,0,
  	0,0,21,59,1,0,0,0,23,61,1,0,0,0,25,26,5,59,0,0,26,2,1,0,0,0,27,28,5,61,
  	0,0,28,4,1,0,0,0,29,31,7,0,0,0,30,29,1,0,0,0,31,32,1,0,0,0,32,30,1,0,
  	0,0,32,33,1,0,0,0,33,6,1,0,0,0,34,36,7,1,0,0,35,34,1,0,0,0,36,37,1,0,
  	0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,8,1,0,0,0,39,41,5,13,0,0,40,39,1,0,
  	0,0,40,41,1,0,0,0,41,42,1,0,0,0,42,43,5,10,0,0,43,10,1,0,0,0,44,46,7,
  	2,0,0,45,44,1,0,0,0,46,47,1,0,0,0,47,45,1,0,0,0,47,48,1,0,0,0,48,49,1,
  	0,0,0,49,50,6,5,0,0,50,12,1,0,0,0,51,52,5,42,0,0,52,14,1,0,0,0,53,54,
  	5,47,0,0,54,16,1,0,0,0,55,56,5,43,0,0,56,18,1,0,0,0,57,58,5,45,0,0,58,
  	20,1,0,0,0,59,60,5,40,0,0,60,22,1,0,0,0,61,62,5,41,0,0,62,24,1,0,0,0,
  	5,0,32,37,40,47,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  libexprlexerLexerStaticData = staticData.release();
}

}

LibExprLexer::LibExprLexer(CharStream *input) : Lexer(input) {
  LibExprLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *libexprlexerLexerStaticData->atn, libexprlexerLexerStaticData->decisionToDFA, libexprlexerLexerStaticData->sharedContextCache);
}

LibExprLexer::~LibExprLexer() {
  delete _interpreter;
}

std::string LibExprLexer::getGrammarFileName() const {
  return "LibExpr.g4";
}

const std::vector<std::string>& LibExprLexer::getRuleNames() const {
  return libexprlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& LibExprLexer::getChannelNames() const {
  return libexprlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& LibExprLexer::getModeNames() const {
  return libexprlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& LibExprLexer::getVocabulary() const {
  return libexprlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LibExprLexer::getSerializedATN() const {
  return libexprlexerLexerStaticData->serializedATN;
}

const atn::ATN& LibExprLexer::getATN() const {
  return *libexprlexerLexerStaticData->atn;
}




void LibExprLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  libexprlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(libexprlexerLexerOnceFlag, libexprlexerLexerInitialize);
#endif
}
