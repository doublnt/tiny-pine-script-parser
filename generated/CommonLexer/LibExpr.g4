grammar LibExpr;
import CommonLexerRules;

prog: stat+;
stat:
	expr ';' NEWLINE			# printExpr
	| ID '=' expr ';' NEWLINE	# assign
	| NEWLINE					# blank;
expr:
	expr op = (MUL | DIV) expr			# MulDiv
	| expr op = (ADD | SUB) expr		# AddSub
	| INT								# int
	| ID								# id
	| LEFT_BRACKET expr RIGHT_BRACKET	# parens;