%{
	#include <stdio.h>
	#include <string.h>
	int len = 0;
	char str[45];
%}

%%

[a-zA-Z]+ {
	if(yyleng > len)
	{
		len = yyleng;
		strcpy(str, yytext);
	}
}

%%

int main()
{
	yylex();
	printf("Largest word: %s\n", str);
	printf("Length of largest word: %d\n", len);
	return 0;
}
