/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Display contents of a text file
*/
#include "stdio.h"

void main()
{
	FILE *file;
	char ch;
	file = fopen("input.txt", "r");
	while(!feof(file))
	{
		ch = getc(file);
		printf("%c", ch);
	}
	printf("\n");
	fclose(file);
}
