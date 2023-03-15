
// Generated from generated/CommonLexer/LibExpr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "LibExprListener.h"


/**
 * This class provides an empty implementation of LibExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  LibExprBaseListener : public LibExprListener {
public:

  virtual void enterProg(LibExprParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(LibExprParser::ProgContext * /*ctx*/) override { }

  virtual void enterStat(LibExprParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(LibExprParser::StatContext * /*ctx*/) override { }

  virtual void enterExpr(LibExprParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(LibExprParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

