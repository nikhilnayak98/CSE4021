%{
	#include <stdio.h>
	int chars = 0, words = 0, lines = 0, letters = 0, num = 0, spl_chars = 0;
%}

%%

[\t ' ']    words++;
[a-zA-Z]    letters++;
[0-9]       num++;
.           spl_chars++;
\n {
    lines++;
    words++;
}

%%

int main()
{
    yylex();
    printf("Characters = %d \n", (letters + num + spl_chars));
    printf("Words = %d \n", words);
    printf("Lines = %d \n", lines);
    return 0;
}
