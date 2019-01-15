/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Prime number
*/
#include "stdio.h"
#include "math.h"
int check_prime(int);

void main()
{
	FILE *input, *output;
	int num;
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	fscanf(input, "%d", &num);
	
	if(check_prime(num) == 1)
		fprintf(output, "Prime Number.");
	else
		fprintf(output, "Not a Prime Number.");
	
	fclose(input);
	fclose(output);
}

int check_prime(int num)
{
	int i;
	if((num == 1) || (num == 0))
		return 0;
 
	for(i = 2; i <= sqrt(num); i++)
	{
		if(num % i == 0)
			return 0;
	}
	return 1;
}
