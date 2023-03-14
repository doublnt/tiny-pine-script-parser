#include "ShortToUnicodeString.h"

void ShortToUnicodeString::enterInit(ExprParser::InitContext *ctx_ptr)
{
    std::cout << "" << std::endl;
}

void ShortToUnicodeString::exitInit(ExprParser::InitContext *ctx_ptr)
{
    std::cout << "" << std::endl;
}

void ShortToUnicodeString::enterValue(ExprParser::ValueContext *ctx_ptr)
{
    int32_t val{std::stoi(ctx_ptr->INT()->getText())};

    std::cout << std::hex << "\\U" << val << std::endl;
}