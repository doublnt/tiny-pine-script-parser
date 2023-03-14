#include <iostream>
#include <string>

#include "antlr4-runtime.h"
#include "generated/ExprLexer.h"
#include "generated/ExprParser.h"

int main(int argc, const char *argv[])
{
    std::string input_str;
    std::cin >> input_str;

    antlr4::ANTLRInputStream inputStream{input_str};
    ExprLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);
    auto tree = parser.init();
    
    std::cout << tree->toStringTree() << std::endl;

    return 0;
}