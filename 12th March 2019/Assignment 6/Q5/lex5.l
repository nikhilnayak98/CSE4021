%{
	#include<stdio.h>
	char lower, capital, space;
%}

space   [\t\n]
lower   [a-z] 
capital [A-Z]

%%

{lower} {
    printf("%c", yytext[0] - 32);
}

{capital} {
    printf("%c", yytext[0] + 32);
}

{space} ECHO;
.   ECHO;

%%

int main()
{
    yylex();
}
