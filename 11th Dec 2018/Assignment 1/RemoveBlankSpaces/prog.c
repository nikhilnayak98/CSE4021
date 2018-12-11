/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Remove blank spaces from a file
*/
#include "stdio.h"

void main()
{
	FILE *input, *output;
	char ch;
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	while(!feof(input))
	{
		ch = getc(input);
		if(ch != ' ')
			putc(ch, output);
	}
	fclose(input);
	fclose(output);
}
