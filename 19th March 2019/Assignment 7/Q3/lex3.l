%{
	#include <stdio.h>
	int scanf_ctr = 0, printf_ctr = 0;
%}

%%

"scanf"	{
	scanf_ctr++;
	fprintf(yyout, "readf");
}

"printf" {
	printf_ctr++;
	fprintf(yyout, "writef");
}

%%

int main()
{
	yyin = fopen("source.c","r");
	yyout = fopen("target.c","w");
	yylex();
	printf("Number of scanfs : %d\n", scanf_ctr);
	printf("Number of printfs : %d\n", printf_ctr);
	return 0;
}
