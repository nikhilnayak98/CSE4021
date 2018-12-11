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
	output = fopen("records.txt", "a");
	printf("\nEnter id - ");
	scanf("%d", &stud.id);
	printf("\nEnter name - ");
	scanf("%s", stud.name);
	printf("\nEnter age - ");
	scanf("%d", &stud.age);
	fprintf(output, "%d", stud.id);
	fprintf(output, "%s\n", stud.name);
	fprintf(output, "%d\n", stud.age);
	fclose(output);
}
