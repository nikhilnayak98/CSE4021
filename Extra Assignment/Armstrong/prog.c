/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Armstrong number
*/
#include "stdio.h"
#include "math.h"
int check_armstrong(int);

void main()
{
	FILE *input, *output;
	int num;
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	fscanf(input, "%d", &num);
	
	if(check_armstrong(num) == 1)
		fprintf(output, "Armstrong Number.");
	else
		fprintf(output, "Not a Armstrong Number.");
	
	fclose(input);
	fclose(output);
}

int check_armstrong(int number)
{
	int temp = number, rem, sum = 0, digits = 0;
    
    while(temp != 0)
    {
        temp /= 10;
        digits++;
    }

    temp = number;

    while(temp != 0)
    {
        rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }

    if(sum == number)
        return 1;
    else
    	return 0;
}
