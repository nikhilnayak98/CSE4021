/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Fibonacci series
*/
#include "stdio.h"

void main()
{
	int n, a = 0, b = 1, c;
	FILE *input, *output;
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	fscanf(input, "%d", &n);
	
	if(n == 1)
		fprintf(output, "%d", a);
	else if(n == 2)
		fprintf(output, "%d %d ", a, b);
	else
	{
		int i = 2;
		fprintf(output, "%d %d ", a, b);
		while(i < n)
		{
			c = a + b;
			a = b;
			b = c;
			fprintf(output, "%d ", c);
			i++;
		}
	}
	
	fclose(input);
	fclose(output);
}
