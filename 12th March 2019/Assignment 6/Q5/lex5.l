%{
	#include<stdio.h>
	#include<ctype.h>
	char lower, capital, space;
%}

space   [\t\n]
lower   [a-z] 
capital [A-Z]

%%

{lower} {
    printf("%c", toupper(yytext[0]));
}

{capital} {
    printf("%c", tolower(yytext[0]));
}

{space} ECHO;
.   ECHO;

%%

int main()
{
    yylex();
}
