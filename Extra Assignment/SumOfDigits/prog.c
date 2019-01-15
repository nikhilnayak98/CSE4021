/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Sum of digits until the number is a single digit
*/
#include "stdio.h"
int no_of_digits(int);
int drop_min_digit(int);
int check_sum(int);

void main()
{
	FILE *input, *output;
	int num, sum = 0;
	input = fopen("input.txt", "r");
	output = fopen("output.txt", "w");
	fscanf(input, "%d", &num);
	
	printf("%d\n", no_of_digits(num));
	printf("%d\n", check_sum(num));
	printf("%d\n", drop_min_digit(num));
	
	while(no_of_digits(check_sum(num)) != 1)
	{
		num = drop_min_digit(num);
	}
	
	fprintf(output, "The last number is %d", num);
	
	fclose(input);
	fclose(output);
}

int no_of_digits(int num)
{
	int temp = num, digits = 0;
	while(temp != 0)
    {
        temp /= 10;
        digits++;
	}
	return digits;
}

int drop_min_digit(int num)
{
	int temp = num, digit, min = num % 10, sum = 0, temp_digit;
	while(temp != 0)
    {
    	digit = temp % 10;
        temp /= 10;
        if(digit < min)
        	min = digit;
	}
	
	temp = num;
	
	while(temp != 0)
    {
    	temp_digit = temp % 10;
    	if(temp_digit != min)
    		sum = sum * 10 + temp_digit;
    	digit = temp % 10;
        temp /= 10;
	}
	return sum;
}

int check_sum(int num)
{
	int temp = num, sum = 0;
	while(temp != 0)
    {
    	sum += temp % 10;
        temp /= 10;
	}
	return sum;
}
