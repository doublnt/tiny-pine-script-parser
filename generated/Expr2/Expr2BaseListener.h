
// Generated from generated/Expr2/Expr2.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "Expr2Listener.h"


/**
 * This class provides an empty implementation of Expr2Listener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  Expr2BaseListener : public Expr2Listener {
public:

  virtual void enterProg(Expr2Parser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(Expr2Parser::ProgContext * /*ctx*/) override { }

  virtual void enterStat(Expr2Parser::StatContext * /*ctx*/) override { }
  virtual void exitStat(Expr2Parser::StatContext * /*ctx*/) override { }

  virtual void enterExpr(Expr2Parser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(Expr2Parser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

