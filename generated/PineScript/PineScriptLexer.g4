lexer grammar PineScriptLexer;

// Keywords
IF : 'if' ;
THEN : 'then' ;
ELSE : 'else' ;
FOR : 'for' ;
TO : 'to' ;
WHILE : 'while' ;
VAR : 'var' ;
FUNCTION : 'function' ;
RETURN : 'return' ;
BREAK : 'break' ;
CONTINUE : 'continue' ;

// Data types
BOOL : 'bool' ;
INT : 'int' ;
FLOAT : 'float' ;
STRING : 'string' ;

// Operators
PLUS : '+' ;
MINUS : '-' ;
MULTIPLY : '*' ;
DIVIDE : '/' ;
MODULO : '%' ;
EQUALS : '=' ;
NOT_EQUALS : '!=' ;
LESS_THAN : '<' ;
GREATER_THAN : '>' ;
LESS_OR_EQUALS : '<=' ;
GREATER_OR_EQUALS : '>=' ;
AND : 'and' ;
OR : 'or' ;
NOT : 'not' ;
BITWISE_OR : '|' ;
BITWISE_AND : '&' ;
BITWISE_XOR : '^' ;
LEFT_SHIFT : '<<' ;
RIGHT_SHIFT : '>>' ;

// Punctuation
SEMICOLON : ';' ;
COMMA : ',' ;
COLON : ':' ;
OPEN_PAREN : '(' ;
CLOSE_PAREN : ')' ;
OPEN_BRACKET : '[' ;
CLOSE_BRACKET : ']' ;
OPEN_BRACE : '{' ;
CLOSE_BRACE : '}' ;

// Literals
INTEGER : [0-9]+ ;
FLOAT : [0-9]*'.'[0-9]+ ;
STRING : '"' (~["\\] | '\\' .)* '"' ;
TRUE : 'true' ;
FALSE : 'false' ;
NULL : 'null' ;

// Identifiers
IDENTIFIER : [a-zA-Z_][a-zA-Z0-9_]* ;

// Whitespace and comments
WS : [ \t\r\n]+ -> skip ;
LINE_COMMENT : '#' ~[\r\n]* -> skip ;
