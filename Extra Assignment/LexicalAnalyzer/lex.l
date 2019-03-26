%{
	// Lexical Analyzer
	// Stupid stuff, has bugs
	#include <stdio.h>
%}

delim [ \t\n]
ws {delim}+
identifier [a-zA-Z]([a-zA-Z]|[0-9]|_)*
digit [0-9]
number {digit}+(\.{digit}+)?(E[+\-]?{digit}+)?

%%

#.* {
	printf("%s - Preprocessor Directive\n", yytext);
}

auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short|unsigned {
	printf("%s - Keyword\n", yytext);
}

{identifier} {
	printf("%s - Identifier\n", yytext);
}

{number} {
	printf("%s - Number\n", yytext);
}

[/]{1}[/].*[\n] {
	printf("%s - Single Line Comment\n", yytext);
}

"/*"([a-z]|[0-9]|[A-Z]|" "\""\n")+"*/"  {
	printf("%s - MultiLine Comment\n", yytext);
}

\"(\\.|[^"\\])*\" {
	printf("%s - String\n", yytext);
}

["{"|"}"|";"|","|"("|")"|"&"] {
	ECHO;
	printf("%s - Symbols\n", yytext);
}						

["+"|"-"|"/"|"="|"*"|"%"|"<"|"<="|"<>"|"="|">"|">="|"=="] {
	ECHO;
	printf("%s - Operator\n", yytext);
}

{ws} ECHO;

%%

int main()
{
	yylex();
	return 0;
}
