lexer grammar CommonLexerRules;

ID: [a-zA-Z]+;
INT: [0-9]+;
NEWLINE: '\r'? '\n';
WS: [ \t]+ -> skip;
MUL: '*';
DIV: '/';
ADD: '+';
SUB: '-';
LEFT_BRACKET: '(';
RIGHT_BRACKET: ')';