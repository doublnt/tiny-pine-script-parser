
// Generated from generated/Expr2/Expr2.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "Expr2Parser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by Expr2Parser.
 */
class  Expr2Listener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(Expr2Parser::ProgContext *ctx) = 0;
  virtual void exitProg(Expr2Parser::ProgContext *ctx) = 0;

  virtual void enterStat(Expr2Parser::StatContext *ctx) = 0;
  virtual void exitStat(Expr2Parser::StatContext *ctx) = 0;

  virtual void enterExpr(Expr2Parser::ExprContext *ctx) = 0;
  virtual void exitExpr(Expr2Parser::ExprContext *ctx) = 0;


};

