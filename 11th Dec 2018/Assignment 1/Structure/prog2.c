/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Read records using structure
*/
#include "stdio.h"

struct student
{
	int id;
	char name[10];
	int age;
} stud;

void main()
{
	FILE *input;
	char temp;
	input = fopen("records.txt", "r");
	fscanf(input, "%c", &temp);
	while(!feof(input))
	{
		fscanf(input, "%d", &stud.id);
		fscanf(input, "%s", stud.name);
		fscanf(input, "%d", &stud.age);
		printf("\nID - %d", stud.id);
		printf("\nName - %s", stud.name);
		printf("\nAge - %d", stud.age);
		printf("\n");
	}
	/*while(fread(&stud, sizeof(struct student), 2, input))
	{
		fscanf(input, "%d", &stud.id);
		fscanf(input, "%s", stud.name);
		fscanf(input, "%d", &stud.age);
		printf("\nID - %d", stud.id);
		printf("\nName - %s", stud.name);
		printf("\nAge - %d", stud.age);
		printf("\n");
	}*/
	fclose(input);
}
