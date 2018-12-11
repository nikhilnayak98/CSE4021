/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Write strings to the file
*/
#include "stdio.h"

void main()
{
	FILE *output;
	char string[20];
	output = fopen("output.txt", "w");
	printf("\nEnter string - ");
	scanf("%s", string);
	fprintf(output, "%s", string);
	printf("\n");
	fclose(output);
}
