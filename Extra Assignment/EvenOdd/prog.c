/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Check for EVEN or ODD without using any arithmetic or relational operators
*/
#include "stdio.h"

void main()
{
	FILE *input, *output;
	int num;
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	fscanf(input, "%d", &num);
	
	if((num & 1) == 0)
		fprintf(output, "The number is Even");
	else
		fprintf(output, "The number is Odd");
	
	fclose(input);
	fclose(output);
}
