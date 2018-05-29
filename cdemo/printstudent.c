#include <stdio.h>
#include <string.h>

struct Student {
	char firstname[25];
	char lastname [25]; 
	int age; 
	int stdntid;
};



int main (int argc, char* argv[])
{
	struct Student mystudent1;
	printf("Type your first name, last name, age, and student id with spaces in between them\n");
	int arg = 1;
	strcpy(mystudent1.firstname, argv[1]);
	arg = 2;
	strcpy(mystudent1.lastname, argv[2]);
	arg = 3;
	strcpy(mystudent1.age, argv[3]);
	arg = 4;
	strcpy(mystudent1.age, argv[4]);
	arg =5;

if (arg==5); 
{
void printstudent (struct Student* student)
{
	printf("The first name is %s\n", student->firstname);
	printf("The last name is %s\n", student->lastname);
	printf("The age is %d\n", student->age);
	printf("The student id is %d\n", student->stdntid);
}
}
}
