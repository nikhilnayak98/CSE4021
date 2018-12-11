/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Remove blank spaces from a file
*/
#include "stdio.h"

void main()
{
	FILE *input;
	char string[20];
	input = fopen("input.txt", "r+");
	while(!feof(input))
	{
		ch = getc(input);
		if(ch == ' ')
			
	}
	fclose(input);
}
