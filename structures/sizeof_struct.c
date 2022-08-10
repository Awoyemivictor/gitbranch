#include <stdio.h>

// Getting the sizeof a struct

struct emp
{
	int emp1;
	char emp2[20];
	float emp3;
}

int main()
{
	struct emp e;

	printf("Sizeof Emp: %d", sizeof(e));
	printf("Sizeof Emp: %d", sizeof(struct emp));

	return (0);
}
