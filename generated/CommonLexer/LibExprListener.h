
// Generated from generated/CommonLexer/LibExpr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "LibExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by LibExprParser.
 */
class  LibExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(LibExprParser::ProgContext *ctx) = 0;
  virtual void exitProg(LibExprParser::ProgContext *ctx) = 0;

  virtual void enterStat(LibExprParser::StatContext *ctx) = 0;
  virtual void exitStat(LibExprParser::StatContext *ctx) = 0;

  virtual void enterExpr(LibExprParser::ExprContext *ctx) = 0;
  virtual void exitExpr(LibExprParser::ExprContext *ctx) = 0;


};

