/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Count characters, spaces, tabs and newlines of a file
*/
#include "stdio.h"

void main()
{
	FILE *file;
	char ch;
	int chars = 0, spaces = 0, tabs = 0, newlines = 0;
	file = fopen("input.txt", "r");
	while((ch = fgetc(file)) != EOF)
	{
		if(ch == ' ')
			spaces++;
		else if(ch == '\t')
			tabs++;
		else if(ch == '\n')
			newlines++;
		else
			chars++;
	}
	printf("Spaces - %d", spaces);
	printf("\nCharacters - %d", chars);
	printf("\nTabs - %d", tabs);
	printf("\nNewlines - %d\n", newlines);
	fclose(file);
}
