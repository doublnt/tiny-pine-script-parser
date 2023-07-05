
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

  virtual std::any visitPrintExpr(LibExprParser::PrintExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(LibExprParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlank(LibExprParser::BlankContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(LibExprParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(LibExprParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSub(LibExprParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitId(LibExprParser::IdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt(LibExprParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }


};

