%{
	#include <stdio.h>
	int sum = 0;
%}

space [ \t]+

%%

I	sum += 1;
IV	sum += 4;
V	sum += 5;
IX	sum += 9;
X	sum += 10;
XL	sum += 40;
L	sum += 50;
XC	sum += 90;
C	sum += 100;
CD	sum += 400;
D	sum += 500;
CM	sum += 900;
M	sum += 1000;

{space}|\n return sum;

%%

int main (void)
{
	int a, b;
	a = yylex();
	b = yylex();
	printf("%d + %d = %d\n", a, b, (a + b));
	return 0;
}
