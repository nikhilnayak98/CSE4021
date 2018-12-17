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
	int FLAG = 1;
	output = fopen("output.txt", "a");
	printf("Enter characters: ");
	while(FLAG)
	{
		scanf("%c", &ch);
		if(ch == '~')
			FLAG = 0;
		else
			putc(ch, output);
	}
	fclose(output);
}
