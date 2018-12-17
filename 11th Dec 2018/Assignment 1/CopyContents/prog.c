/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Copy content from one file to another
*/
#include "stdio.h"

void main()
{
	FILE *input, *output;
	char ch;
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	/*
	while(!feof(input))
	{
		ch = getc(input);
		putc(ch, output);
	}
	*/
	while((ch = fgetc(input)) != EOF)
	{
		fputc(ch, output);
	}
	fclose(input);
	fclose(output);
}
