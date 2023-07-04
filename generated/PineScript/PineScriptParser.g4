parser grammar PineScriptParser;
import PineScriptLexer;

options {
  tokenVocab = PineScriptLexer;
}

program : statement* ;

statement : variableDeclaration
          | functionDeclaration
          | ifStatement
          | forStatement
          | whileStatement
          | expressionStatement
          | breakStatement
          | continueStatement
          ;

variableDeclaration : VAR IDENTIFIER (COLON type)? (EQUALS expression)? SEMICOLON ;

functionDeclaration : FUNCTION IDENTIFIER OPEN_PAREN parameterList? CLOSE_PAREN (COLON type)? block ;

parameterList : parameter (COMMA parameter)* ;

parameter : IDENTIFIER (COLON type)? ;

type : BOOL | INT | FLOAT | STRING ;

ifStatement : IF expression THEN statement (ELSE statement)? ;

forStatement : FOR IDENTIFIER EQUALS expression TO expression (STEP expression)? block ;

whileStatement : WHILE expression block ;

expressionStatement : expression SEMICOLON ;

breakStatement : BREAK SEMICOLON ;

continueStatement : CONTINUE SEMICOLON ;

block : OPEN_BRACE statement* CLOSE_BRACE ;

expression : assignment ;

assignment : conditional (EQUALS conditional)* ;

conditional : logicalOr (QUESTION_MARK expression COLON conditional)? ;

logicalOr : logicalAnd (OR logicalAnd)* ;

logicalAnd : bitwiseOr (AND bitwiseOr)* ;

bitwiseOr : bitwiseXor (BITWISE_OR bitwiseXor)* ;

bitwiseXor : bitwiseAnd (BITWISE_XOR bitwiseAnd)* ;

bitwiseAnd : equality (BITWISE_AND equality)* ;

equality : relational ((EQUALS | NOT_EQUALS) relational)* ;

relational : shift ((LESS_THAN | GREATER_THAN | LESS_OR_EQUALS | GREATER_OR_EQUALS) ;

shift : additive ((LEFT_SHIFT | RIGHT_SHIFT) additive)* ;

additive : multiplicative ((PLUS | MINUS) multiplicative)* ;

multiplicative : unary ((MULTIPLY | DIVIDE | MODULO) unary)* ;

unary : (PLUS | MINUS | NOT | BITWISE_NOT) unary | postfix ;

postfix : primary (OPEN_BRACKET expression CLOSE_BRACKET | OPEN_PAREN argumentList? CLOSE_PAREN)* ;

argumentList : expression (COMMA expression)* ;

primary : INTEGER | FLOAT | STRING | TRUE | FALSE | NULL | IDENTIFIER | OPEN_PAREN expression CLOSE_PAREN ;