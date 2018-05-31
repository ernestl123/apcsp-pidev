#include <stdio.h>
#include <string.h>

struct Student {
	char first[50];
	char last[50];
	int age;
	int stid;
};

void printStudent(struct Student* student)
{
	printf("The name is %s %s.\n", student -> first, student -> last);
	printf("The age is %d\n", student -> age);
	printf("The student ID is %d\n", student -> stid);

}

