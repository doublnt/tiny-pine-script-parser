
// Generated from .\LibExpr.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"
#include "LibExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by LibExprParser.
 */
class  LibExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by LibExprParser.
   */
    virtual std::any visitProg(LibExprParser::ProgContext *context) = 0;

    virtual std::any visitStat(LibExprParser::StatContext *context) = 0;

    virtual std::any visitExpr(LibExprParser::ExprContext *context) = 0;


};

