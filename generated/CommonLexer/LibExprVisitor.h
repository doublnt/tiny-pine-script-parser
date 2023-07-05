
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

    virtual std::any visitPrintExpr(LibExprParser::PrintExprContext *context) = 0;

    virtual std::any visitAssign(LibExprParser::AssignContext *context) = 0;

    virtual std::any visitBlank(LibExprParser::BlankContext *context) = 0;

    virtual std::any visitParens(LibExprParser::ParensContext *context) = 0;

    virtual std::any visitMulDiv(LibExprParser::MulDivContext *context) = 0;

    virtual std::any visitAddSub(LibExprParser::AddSubContext *context) = 0;

    virtual std::any visitId(LibExprParser::IdContext *context) = 0;

    virtual std::any visitInt(LibExprParser::IntContext *context) = 0;


};

