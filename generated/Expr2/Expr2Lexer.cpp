
// Generated from generated/Expr2/Expr2.g4 by ANTLR 4.12.0


#include "Expr2Lexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct Expr2LexerStaticData final {
  Expr2LexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Expr2LexerStaticData(const Expr2LexerStaticData&) = delete;
  Expr2LexerStaticData(Expr2LexerStaticData&&) = delete;
  Expr2LexerStaticData& operator=(const Expr2LexerStaticData&) = delete;
  Expr2LexerStaticData& operator=(Expr2LexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag expr2lexerLexerOnceFlag;
Expr2LexerStaticData *expr2lexerLexerStaticData = nullptr;

void expr2lexerLexerInitialize() {
  assert(expr2lexerLexerStaticData == nullptr);
  auto staticData = std::make_unique<Expr2LexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "ID", "INT", 
      "NEWLINE", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'='", "'*'", "'/'", "'+'", "'-'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "ID", "INT", "NEWLINE", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,11,59,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,
  	4,1,4,1,5,1,5,1,6,1,6,1,7,4,7,39,8,7,11,7,12,7,40,1,8,4,8,44,8,8,11,8,
  	12,8,45,1,9,3,9,49,8,9,1,9,1,9,1,10,4,10,54,8,10,11,10,12,10,55,1,10,
  	1,10,0,0,11,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,1,0,3,
  	2,0,65,90,97,122,1,0,48,57,2,0,9,9,32,32,62,0,1,1,0,0,0,0,3,1,0,0,0,0,
  	5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,
  	0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,1,23,1,0,0,0,3,25,1,0,0,0,
  	5,27,1,0,0,0,7,29,1,0,0,0,9,31,1,0,0,0,11,33,1,0,0,0,13,35,1,0,0,0,15,
  	38,1,0,0,0,17,43,1,0,0,0,19,48,1,0,0,0,21,53,1,0,0,0,23,24,5,61,0,0,24,
  	2,1,0,0,0,25,26,5,42,0,0,26,4,1,0,0,0,27,28,5,47,0,0,28,6,1,0,0,0,29,
  	30,5,43,0,0,30,8,1,0,0,0,31,32,5,45,0,0,32,10,1,0,0,0,33,34,5,40,0,0,
  	34,12,1,0,0,0,35,36,5,41,0,0,36,14,1,0,0,0,37,39,7,0,0,0,38,37,1,0,0,
  	0,39,40,1,0,0,0,40,38,1,0,0,0,40,41,1,0,0,0,41,16,1,0,0,0,42,44,7,1,0,
  	0,43,42,1,0,0,0,44,45,1,0,0,0,45,43,1,0,0,0,45,46,1,0,0,0,46,18,1,0,0,
  	0,47,49,5,114,0,0,48,47,1,0,0,0,48,49,1,0,0,0,49,50,1,0,0,0,50,51,5,10,
  	0,0,51,20,1,0,0,0,52,54,7,2,0,0,53,52,1,0,0,0,54,55,1,0,0,0,55,53,1,0,
  	0,0,55,56,1,0,0,0,56,57,1,0,0,0,57,58,6,10,0,0,58,22,1,0,0,0,5,0,40,45,
  	48,55,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  expr2lexerLexerStaticData = staticData.release();
}

}

Expr2Lexer::Expr2Lexer(CharStream *input) : Lexer(input) {
  Expr2Lexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *expr2lexerLexerStaticData->atn, expr2lexerLexerStaticData->decisionToDFA, expr2lexerLexerStaticData->sharedContextCache);
}

Expr2Lexer::~Expr2Lexer() {
  delete _interpreter;
}

std::string Expr2Lexer::getGrammarFileName() const {
  return "Expr2.g4";
}

const std::vector<std::string>& Expr2Lexer::getRuleNames() const {
  return expr2lexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& Expr2Lexer::getChannelNames() const {
  return expr2lexerLexerStaticData->channelNames;
}

const std::vector<std::string>& Expr2Lexer::getModeNames() const {
  return expr2lexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& Expr2Lexer::getVocabulary() const {
  return expr2lexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView Expr2Lexer::getSerializedATN() const {
  return expr2lexerLexerStaticData->serializedATN;
}

const atn::ATN& Expr2Lexer::getATN() const {
  return *expr2lexerLexerStaticData->atn;
}




void Expr2Lexer::initialize() {
  ::antlr4::internal::call_once(expr2lexerLexerOnceFlag, expr2lexerLexerInitialize);
}
