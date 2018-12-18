/*
Name: Nikhil Ranjan Nayak
Regd no: 1641012040
Desc: Write records using structure
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
	FILE *output;
	int count;
	output = fopen("records.txt", "a");
	printf("Enter number of records to enter - ");
	scanf("%d", &count);
	for(int i = 0; i < count; i++)
	{
		printf("Record %d \n", (i + 1));
		printf("Enter id - ");
		scanf("%d", &stud.id);
		printf("Enter name - ");
		scanf("%s", stud.name);
		printf("Enter age - ");
		scanf("%d", &stud.age);
		fprintf(output, "\n%d\n%s\n%d", stud.id, stud.name, stud.age);
	}
	fclose(output);
}
