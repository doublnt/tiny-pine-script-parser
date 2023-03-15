#include <iostream>
#include <string>

#include "antlr4-runtime.h"

#include "generated/Expr/ExprLexer.h"
#include "generated/Expr/ExprParser.h"
#include "src/ShortToUnicodeString.h"

#include "generated/Expr2/Expr2Lexer.h"
#include "generated/Expr2/Expr2Parser.h"

void exprParserTree()
{
    std::string input_str;
    std::cin >> input_str;

    antlr4::ANTLRInputStream inputStream{input_str};
    ExprLexer lexer{&inputStream};
    antlr4::CommonTokenStream tokens{&lexer};
    ExprParser parser{&tokens};
    auto init_context = parser.init();
    std::cout << init_context->toStringTree(&parser) << std::endl;

    antlr4::tree::ParseTreeWalker parse_tree_walker;
    parse_tree_walker.walk(new ShortToUnicodeString(), init_context);
}

void expr2ParserTree()
{
    antlr4::ANTLRInputStream input_stream{std::cin};
    Expr2Lexer lexer{&input_stream};
    antlr4::CommonTokenStream tokens{&lexer};
    Expr2Parser parser{&tokens};

    auto tree{parser.prog()};

    std::cout << tree->toStringTree(&parser) << std::endl;
}

int main(int argc, const char *argv[])
{
    expr2ParserTree();

    return 0;
}