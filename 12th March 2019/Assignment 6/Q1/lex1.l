%{
	#include <stdio.h>
	int v = 0, c = 0;
%}

v   [aeiouAEIOU]

%%

{v} {
    printf("%c is a vowel\n", yytext[0]);
    v++;
}

[a-zA-Z] {
    printf("%c is a consonent\n", yytext[0]);
    c++;
}

\n {
    printf("%d vowels & %d consonent\n", v, c);
    exit(0);
}
