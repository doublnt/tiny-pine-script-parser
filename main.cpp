#include <iostream>
#include <string>

#include "antlr4-runtime.h"
#include "ExprLexer.h"
#include "ExprParser.h"

int main(int argc, const char *argv[])
{
    antlr4::ANTLRInputStream inputStream("1+1");
    ExprLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);

    return 0;
}