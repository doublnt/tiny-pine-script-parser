#pragma once

#include "../generated/ExprBaseListener.h"
#include <iostream>

class ShortToUnicodeString : public ExprBaseListener
{
public:
    void enterInit(ExprParser::InitContext *ctx_ptr) override;

    void exitInit(ExprParser::InitContext *ctx_ptr) override;

    void enterValue(ExprParser::ValueContext *ctx_ptr) override;
};