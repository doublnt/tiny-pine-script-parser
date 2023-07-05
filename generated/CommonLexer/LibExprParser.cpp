
// Generated from .\LibExpr.g4 by ANTLR 4.13.0


#include "LibExprVisitor.h"

#include "LibExprParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct LibExprParserStaticData final {
  LibExprParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  LibExprParserStaticData(const LibExprParserStaticData&) = delete;
  LibExprParserStaticData(LibExprParserStaticData&&) = delete;
  LibExprParserStaticData& operator=(const LibExprParserStaticData&) = delete;
  LibExprParserStaticData& operator=(LibExprParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag libexprParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
LibExprParserStaticData *libexprParserStaticData = nullptr;

void libexprParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (libexprParserStaticData != nullptr) {
    return;
  }
#else
  assert(libexprParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<LibExprParserStaticData>(
    std::vector<std::string>{
      "prog", "stat", "expr"
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
  	4,1,12,45,2,0,7,0,2,1,7,1,2,2,7,2,1,0,4,0,8,8,0,11,0,12,0,9,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,23,8,1,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,3,2,32,8,2,1,2,1,2,1,2,1,2,1,2,1,2,5,2,40,8,2,10,2,12,2,43,9,2,1,
  	2,0,1,4,3,0,2,4,0,2,1,0,7,8,1,0,9,10,48,0,7,1,0,0,0,2,22,1,0,0,0,4,31,
  	1,0,0,0,6,8,3,2,1,0,7,6,1,0,0,0,8,9,1,0,0,0,9,7,1,0,0,0,9,10,1,0,0,0,
  	10,1,1,0,0,0,11,12,3,4,2,0,12,13,5,1,0,0,13,14,5,5,0,0,14,23,1,0,0,0,
  	15,16,5,3,0,0,16,17,5,2,0,0,17,18,3,4,2,0,18,19,5,1,0,0,19,20,5,5,0,0,
  	20,23,1,0,0,0,21,23,5,5,0,0,22,11,1,0,0,0,22,15,1,0,0,0,22,21,1,0,0,0,
  	23,3,1,0,0,0,24,25,6,2,-1,0,25,32,5,4,0,0,26,32,5,3,0,0,27,28,5,11,0,
  	0,28,29,3,4,2,0,29,30,5,12,0,0,30,32,1,0,0,0,31,24,1,0,0,0,31,26,1,0,
  	0,0,31,27,1,0,0,0,32,41,1,0,0,0,33,34,10,5,0,0,34,35,7,0,0,0,35,40,3,
  	4,2,6,36,37,10,4,0,0,37,38,7,1,0,0,38,40,3,4,2,5,39,33,1,0,0,0,39,36,
  	1,0,0,0,40,43,1,0,0,0,41,39,1,0,0,0,41,42,1,0,0,0,42,5,1,0,0,0,43,41,
  	1,0,0,0,5,9,22,31,39,41
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  libexprParserStaticData = staticData.release();
}

}

LibExprParser::LibExprParser(TokenStream *input) : LibExprParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

LibExprParser::LibExprParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  LibExprParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *libexprParserStaticData->atn, libexprParserStaticData->decisionToDFA, libexprParserStaticData->sharedContextCache, options);
}

LibExprParser::~LibExprParser() {
  delete _interpreter;
}

const atn::ATN& LibExprParser::getATN() const {
  return *libexprParserStaticData->atn;
}

std::string LibExprParser::getGrammarFileName() const {
  return "LibExpr.g4";
}

const std::vector<std::string>& LibExprParser::getRuleNames() const {
  return libexprParserStaticData->ruleNames;
}

const dfa::Vocabulary& LibExprParser::getVocabulary() const {
  return libexprParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView LibExprParser::getSerializedATN() const {
  return libexprParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

LibExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<LibExprParser::StatContext *> LibExprParser::ProgContext::stat() {
  return getRuleContexts<LibExprParser::StatContext>();
}

LibExprParser::StatContext* LibExprParser::ProgContext::stat(size_t i) {
  return getRuleContext<LibExprParser::StatContext>(i);
}


size_t LibExprParser::ProgContext::getRuleIndex() const {
  return LibExprParser::RuleProg;
}


std::any LibExprParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LibExprVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

LibExprParser::ProgContext* LibExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, LibExprParser::RuleProg);
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
    setState(7); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(6);
      stat();
      setState(9); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2104) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

LibExprParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LibExprParser::StatContext::getRuleIndex() const {
  return LibExprParser::RuleStat;
}

void LibExprParser::StatContext::copyFrom(StatContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlankContext ------------------------------------------------------------------

tree::TerminalNode* LibExprParser::BlankContext::NEWLINE() {
  return getToken(LibExprParser::NEWLINE, 0);
}

LibExprParser::BlankContext::BlankContext(StatContext *ctx) { copyFrom(ctx); }


std::any LibExprParser::BlankContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LibExprVisitor*>(visitor))
    return parserVisitor->visitBlank(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PrintExprContext ------------------------------------------------------------------

LibExprParser::ExprContext* LibExprParser::PrintExprContext::expr() {
  return getRuleContext<LibExprParser::ExprContext>(0);
}

tree::TerminalNode* LibExprParser::PrintExprContext::NEWLINE() {
  return getToken(LibExprParser::NEWLINE, 0);
}

LibExprParser::PrintExprContext::PrintExprContext(StatContext *ctx) { copyFrom(ctx); }


std::any LibExprParser::PrintExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LibExprVisitor*>(visitor))
    return parserVisitor->visitPrintExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

tree::TerminalNode* LibExprParser::AssignContext::ID() {
  return getToken(LibExprParser::ID, 0);
}

LibExprParser::ExprContext* LibExprParser::AssignContext::expr() {
  return getRuleContext<LibExprParser::ExprContext>(0);
}

tree::TerminalNode* LibExprParser::AssignContext::NEWLINE() {
  return getToken(LibExprParser::NEWLINE, 0);
}

LibExprParser::AssignContext::AssignContext(StatContext *ctx) { copyFrom(ctx); }


std::any LibExprParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LibExprVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
LibExprParser::StatContext* LibExprParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 2, LibExprParser::RuleStat);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(22);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<LibExprParser::PrintExprContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(11);
      expr(0);
      setState(12);
      match(LibExprParser::T__0);
      setState(13);
      match(LibExprParser::NEWLINE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<LibExprParser::AssignContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(15);
      match(LibExprParser::ID);
      setState(16);
      match(LibExprParser::T__1);
      setState(17);
      expr(0);
      setState(18);
      match(LibExprParser::T__0);
      setState(19);
      match(LibExprParser::NEWLINE);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<LibExprParser::BlankContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(21);
      match(LibExprParser::NEWLINE);
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

//----------------- ExprContext ------------------------------------------------------------------

LibExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t LibExprParser::ExprContext::getRuleIndex() const {
  return LibExprParser::RuleExpr;
}

void LibExprParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParensContext ------------------------------------------------------------------

tree::TerminalNode* LibExprParser::ParensContext::LEFT_BRACKET() {
  return getToken(LibExprParser::LEFT_BRACKET, 0);
}

LibExprParser::ExprContext* LibExprParser::ParensContext::expr() {
  return getRuleContext<LibExprParser::ExprContext>(0);
}

tree::TerminalNode* LibExprParser::ParensContext::RIGHT_BRACKET() {
  return getToken(LibExprParser::RIGHT_BRACKET, 0);
}

LibExprParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }


std::any LibExprParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LibExprVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<LibExprParser::ExprContext *> LibExprParser::MulDivContext::expr() {
  return getRuleContexts<LibExprParser::ExprContext>();
}

LibExprParser::ExprContext* LibExprParser::MulDivContext::expr(size_t i) {
  return getRuleContext<LibExprParser::ExprContext>(i);
}

tree::TerminalNode* LibExprParser::MulDivContext::MUL() {
  return getToken(LibExprParser::MUL, 0);
}

tree::TerminalNode* LibExprParser::MulDivContext::DIV() {
  return getToken(LibExprParser::DIV, 0);
}

LibExprParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }


std::any LibExprParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LibExprVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<LibExprParser::ExprContext *> LibExprParser::AddSubContext::expr() {
  return getRuleContexts<LibExprParser::ExprContext>();
}

LibExprParser::ExprContext* LibExprParser::AddSubContext::expr(size_t i) {
  return getRuleContext<LibExprParser::ExprContext>(i);
}

tree::TerminalNode* LibExprParser::AddSubContext::ADD() {
  return getToken(LibExprParser::ADD, 0);
}

tree::TerminalNode* LibExprParser::AddSubContext::SUB() {
  return getToken(LibExprParser::SUB, 0);
}

LibExprParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }


std::any LibExprParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LibExprVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdContext ------------------------------------------------------------------

tree::TerminalNode* LibExprParser::IdContext::ID() {
  return getToken(LibExprParser::ID, 0);
}

LibExprParser::IdContext::IdContext(ExprContext *ctx) { copyFrom(ctx); }


std::any LibExprParser::IdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LibExprVisitor*>(visitor))
    return parserVisitor->visitId(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* LibExprParser::IntContext::INT() {
  return getToken(LibExprParser::INT, 0);
}

LibExprParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }


std::any LibExprParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<LibExprVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}

LibExprParser::ExprContext* LibExprParser::expr() {
   return expr(0);
}

LibExprParser::ExprContext* LibExprParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  LibExprParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  LibExprParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, LibExprParser::RuleExpr, precedence);

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
    setState(31);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case LibExprParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(25);
        match(LibExprParser::INT);
        break;
      }

      case LibExprParser::ID: {
        _localctx = _tracker.createInstance<IdContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(26);
        match(LibExprParser::ID);
        break;
      }

      case LibExprParser::LEFT_BRACKET: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(27);
        match(LibExprParser::LEFT_BRACKET);
        setState(28);
        expr(0);
        setState(29);
        match(LibExprParser::RIGHT_BRACKET);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(41);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(39);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(33);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(34);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == LibExprParser::MUL

          || _la == LibExprParser::DIV)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(35);
          expr(6);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(36);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(37);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == LibExprParser::ADD

          || _la == LibExprParser::SUB)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(38);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(43);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool LibExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool LibExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 5);
    case 1: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void LibExprParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  libexprParserInitialize();
#else
  ::antlr4::internal::call_once(libexprParserOnceFlag, libexprParserInitialize);
#endif
}
