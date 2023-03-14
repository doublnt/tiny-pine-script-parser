#include <iostream>
#include <string>

#include "antlr4-runtime.h"
#include "generated/ExprLexer.h"
#include "generated/ExprParser.h"
#include "src/ShortToUnicodeString.h"

int main(int argc, const char *argv[])
{
    std::string input_str;
    std::cin >> input_str;

    antlr4::ANTLRInputStream inputStream{input_str};
    ExprLexer lexer(&inputStream);
    antlr4::CommonTokenStream tokens(&lexer);
    ExprParser parser(&tokens);
    auto init_context = parser.init();
    std::cout << init_context->toStringTree() << std::endl;

    antlr4::tree::ParseTreeWalker parse_tree_walker;
    parse_tree_walker.walk(new ShortToUnicodeString(), init_context);

    return 0;
}