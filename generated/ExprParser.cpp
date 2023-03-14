
// Generated from .\generated\Expr.g4 by ANTLR 4.12.0


#include "ExprListener.h"

#include "ExprParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ExprParserStaticData final {
  ExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ExprParserStaticData(const ExprParserStaticData&) = delete;
  ExprParserStaticData(ExprParserStaticData&&) = delete;
  ExprParserStaticData& operator=(const ExprParserStaticData&) = delete;
  ExprParserStaticData& operator=(ExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag exprParserOnceFlag;
ExprParserStaticData *exprParserStaticData = nullptr;

void exprParserInitialize() {
  assert(exprParserStaticData == nullptr);
  auto staticData = std::make_unique<ExprParserStaticData>(
    std::vector<std::string>{
      "init", "value"
    },
    std::vector<std::string>{
      "", "'{'", "','", "'}'"
    },
    std::vector<std::string>{
      "", "", "", "", "INT", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,5,20,2,0,7,0,2,1,7,1,1,0,1,0,1,0,1,0,5,0,9,8,0,10,0,12,0,12,9,0,1,
  	0,1,0,1,1,1,1,3,1,18,8,1,1,1,0,0,2,0,2,0,0,19,0,4,1,0,0,0,2,17,1,0,0,
  	0,4,5,5,1,0,0,5,10,3,2,1,0,6,7,5,2,0,0,7,9,3,2,1,0,8,6,1,0,0,0,9,12,1,
  	0,0,0,10,8,1,0,0,0,10,11,1,0,0,0,11,13,1,0,0,0,12,10,1,0,0,0,13,14,5,
  	3,0,0,14,1,1,0,0,0,15,18,3,0,0,0,16,18,5,4,0,0,17,15,1,0,0,0,17,16,1,
  	0,0,0,18,3,1,0,0,0,2,10,17
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  exprParserStaticData = staticData.release();
}

}

ExprParser::ExprParser(TokenStream *input) : ExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ExprParser::ExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *exprParserStaticData->atn, exprParserStaticData->decisionToDFA, exprParserStaticData->sharedContextCache, options);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

const atn::ATN& ExprParser::getATN() const {
  return *exprParserStaticData->atn;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return exprParserStaticData->ruleNames;
}

const dfa::Vocabulary& ExprParser::getVocabulary() const {
  return exprParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ExprParser::getSerializedATN() const {
  return exprParserStaticData->serializedATN;
}


//----------------- InitContext ------------------------------------------------------------------

ExprParser::InitContext::InitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::ValueContext *> ExprParser::InitContext::value() {
  return getRuleContexts<ExprParser::ValueContext>();
}

ExprParser::ValueContext* ExprParser::InitContext::value(size_t i) {
  return getRuleContext<ExprParser::ValueContext>(i);
}


size_t ExprParser::InitContext::getRuleIndex() const {
  return ExprParser::RuleInit;
}

void ExprParser::InitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInit(this);
}

void ExprParser::InitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInit(this);
}

ExprParser::InitContext* ExprParser::init() {
  InitContext *_localctx = _tracker.createInstance<InitContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleInit);
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
    setState(4);
    match(ExprParser::T__0);
    setState(5);
    value();
    setState(10);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ExprParser::T__1) {
      setState(6);
      match(ExprParser::T__1);
      setState(7);
      value();
      setState(12);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(13);
    match(ExprParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ValueContext ------------------------------------------------------------------

ExprParser::ValueContext::ValueContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ExprParser::InitContext* ExprParser::ValueContext::init() {
  return getRuleContext<ExprParser::InitContext>(0);
}

tree::TerminalNode* ExprParser::ValueContext::INT() {
  return getToken(ExprParser::INT, 0);
}


size_t ExprParser::ValueContext::getRuleIndex() const {
  return ExprParser::RuleValue;
}

void ExprParser::ValueContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterValue(this);
}

void ExprParser::ValueContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitValue(this);
}

ExprParser::ValueContext* ExprParser::value() {
  ValueContext *_localctx = _tracker.createInstance<ValueContext>(_ctx, getState());
  enterRule(_localctx, 2, ExprParser::RuleValue);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(17);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__0: {
        enterOuterAlt(_localctx, 1);
        setState(15);
        init();
        break;
      }

      case ExprParser::INT: {
        enterOuterAlt(_localctx, 2);
        setState(16);
        match(ExprParser::INT);
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

void ExprParser::initialize() {
  ::antlr4::internal::call_once(exprParserOnceFlag, exprParserInitialize);
}
