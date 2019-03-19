%{
	#include <stdio.h>
	int ctr = 0;
%}

%%

auto|double|int|struct|break|else|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|if|static|while|default|goto|sizeof|volatile|const|float|short|unsigned {
	printf("Keyword");
}

[a-z]([a-z]|[0-9]|_)* {
	ctr++;
	printf("Identifier");
}

[0-9]* {
	printf("Number");
}

.* {
	printf("Invalid");
}

%%

int main()
{
	yylex();
	printf("Number of identifiers : %d\n", ctr);
	return 0;
}
