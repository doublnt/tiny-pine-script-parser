
// Generated from ./generated/Expr.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterInit(ExprParser::InitContext *ctx) = 0;
  virtual void exitInit(ExprParser::InitContext *ctx) = 0;

  virtual void enterValue(ExprParser::ValueContext *ctx) = 0;
  virtual void exitValue(ExprParser::ValueContext *ctx) = 0;


};

