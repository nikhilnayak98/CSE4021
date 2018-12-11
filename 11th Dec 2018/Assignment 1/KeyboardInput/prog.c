/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Keyboard input in real time
*/
#include "stdio.h"

void main()
{
	FILE *output;
	char ch;
	output = fopen("output.txt", "w");
	printf("\nEnter characters - ");
	scanf("%c", &ch);
	if(ch != '~')
	{
		while(ch != '~')
		{
			scanf("%c", &ch);
			putc(ch, output);
		}
	}
	fclose(output);
}
