lexer grammar PineScriptLexer;

// Keywords
IF: 'if';
THEN: 'then';
ELSE: 'else';
FOR: 'for';
TO: 'to';
WHILE: 'while';
VAR: 'var';
FUNCTION: 'function';
RETURN: 'return';
BREAK: 'break';
CONTINUE: 'continue';

STEP: BREAK | CONTINUE | RETURN;

// Data types
BOOL: 'bool';
INT: 'int';
FLOAT: 'float';
STRING: 'string';

// Operators
PLUS: '+';
MINUS: '-';
MULTIPLY: '*';
DIVIDE: '/';
MODULO: '%';
EQUALS: '=';
NOT_EQUALS: '!=';
LESS_THAN: '<';
GREATER_THAN: '>';
LESS_OR_EQUALS: '<=';
GREATER_OR_EQUALS: '>=';
AND: 'and';
OR: 'or';
NOT: 'not';
BITWISE_OR: '|';
BITWISE_AND: '&';
BITWISE_XOR: '^';
BITWISE_NOT: '~';
LEFT_SHIFT: '<<';
RIGHT_SHIFT: '>>';

// Punctuation
SEMICOLON: ';';
COMMA: ',';
COLON: ':';
OPEN_PAREN: '(';
CLOSE_PAREN: ')';
OPEN_BRACKET: '[';
CLOSE_BRACKET: ']';
OPEN_BRACE: '{';
CLOSE_BRACE: '}';
QUESTION_MARK: '?';

// Literals
INTEGER: [0-9]+;

TRUE: 'true';
FALSE: 'false';
NULL: 'null';

// Identifiers
IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_]*;

// Whitespace and comments
WS: [ \t\r\n]+ -> skip;
LINE_COMMENT: '#' ~[\r\n]* -> skip;
