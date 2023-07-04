
// Generated from .\LibExpr.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "LibExprVisitor.h"


/**
 * This class provides an empty implementation of LibExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  LibExprBaseVisitor : public LibExprVisitor {
public:

  virtual std::any visitProg(LibExprParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStat(LibExprParser::StatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(LibExprParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

