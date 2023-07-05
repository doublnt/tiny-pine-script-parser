#include "..//generated//CommonLexer//LibExprBaseVisitor.h"
#include <map>
#include <iostream>

class EvalVisitor : public LibExprBaseVisitor
{
public:
    EvalVisitor() : local_cache()
    {
    }

public:
    std::map<std::string, int32_t> local_cache;

public:
    std::any visitPrintExpr(LibExprParser::PrintExprContext *ctx) override
    {
        std::cout << std::any_cast<int32_t>(visit(ctx->expr())) << std::endl;
        return 0;
    }

    std::any visitAssign(LibExprParser::AssignContext *ctx) override
    {
        std::string id{ctx->ID()->getText()};
        auto val{std::any_cast<int32_t>(visit(ctx->expr()))};
        local_cache[id] = val;

        return val;
    }

    std::any visitId(LibExprParser::IdContext *ctx) override
    {
        std::string id{ctx->ID()->getText()};

        if (local_cache.count(id))
        {
            return local_cache.at(id);
        }

        return 0;
    }

    std::any visitInt(LibExprParser::IntContext *ctx) override
    {
        return std::stoi(ctx->INT()->getText());
    }

    std::any visitAddSub(LibExprParser::AddSubContext *ctx) override
    {
        auto left{std::any_cast<int32_t>(visit(ctx->expr(0)))};
        auto right{std::any_cast<int32_t>(visit(ctx->expr(1)))};

        if (ctx->op->getType() == LibExprParser::ADD)
        {
            return left + right;
        }

        return left - right;
    }

    std::any visitMulDiv(LibExprParser::MulDivContext *ctx) override
    {
        auto left{std::any_cast<int32_t>(visit(ctx->expr(0)))};
        auto right{std::any_cast<int32_t>(visit(ctx->expr(1)))};

        if (ctx->op->getType() == LibExprParser::MUL)
        {
            return left * right;
        }

        return left / right;
    }

    std::any visitParens(LibExprParser::ParensContext *ctx) override
    {
        return std::any_cast<int32_t>(visit(ctx->expr()));
    }
};