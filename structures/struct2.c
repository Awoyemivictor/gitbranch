#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct Student
{
	char name[50];
	char id[10];
	int age;
	int grades[5];
};

int main(void)
{
	struct Student victor;
	struct Student kevin;

	strcpy(victor.name, "Victor");
	strcpy(victor.id, "510");
	victor.age = 21;
	victor.grades[0] = 10;
	victor.grades[1] = 20;
	victor.grades[2] = 30;
	victor.grades[3] = 40;
	victor.grades[4] = 50;

	printf("Name: %s\n", victor.name);
	printf("ID: %s\n", victor.id);
	printf("Age: %d\n", victor.age);

	printf("Printing Victor  grades with for loop\n");
	for (int i = 0; i < 5; i++)
	{
		printf("Grades include: %d", victor.grades[i]);
		printf("\n");
	}
	printf("Grade in Maths: %d\n", victor.grades[0]);
	printf("Grade in English: %d\n", victor.grades[1]);
	printf("Grade in Physics: %d\n", victor.grades[2]);
	printf("Grade in Chemistry: %d\n", victor.grades[3]);
	printf("Grade in Biology: %d\n", victor.grades[4]);

	printf("\n");
	printf("Printing Victor grades one by one\n");

	strcpy(kevin.name, "Kevin");
	strcpy(kevin.id, "700");
	kevin.age = 25;
	kevin.grades[0] = 100;
	kevin.grades[1] = 110;
	kevin.grades[2] = 120;
	kevin.grades[3] = 130;
	kevin.grades[4] = 140;

	printf("Name: %s\n", kevin.name);
	printf("ID: %s\n", kevin.id);
	printf("Age: %d\n", kevin.age);


	printf("Printing Kevin grades with for loop\n");
	for (int i = 0; i < 5; i++)
	{
		printf("Grades include: %d", kevin.grades[i]);
		printf("\n");
	}

	printf("Printing Keving grades one by one\n");

	printf("Grade in Maths: %d\n", kevin.grades[0]);
	printf("Grade in English: %d\n", kevin.grades[1]);
	printf("Grade in Physics: %d\n", kevin.grades[2]);
	printf("Grade in Chemistry: %d\n", kevin.grades[3]);
	printf("Grade in Biology: %d\n", kevin.grades[4]);

	return (0);
}
