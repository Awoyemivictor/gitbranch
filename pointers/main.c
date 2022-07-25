#include <stdio.h>

/**
 * Double Pointers - Practising double pointers in C
 * num - Normal variable
 * pr2 - pointer 1 pointing to the address of num of data type int
 * pr1 - pointer 2 pointing to the address of pr1 of data type int
 *
 * Return: 0
 */

int main(void)
{
	int num = 123;
	int *pr2;
	int **pr1;

	pr2 = &num;
	pr1 = &pr2;

	/* Printing possible ways to find value of variable num */
	printf("\n Value of num is: %d", num);
	printf("\n Value of num using pr2 is: %d", *pr2);
	printf("\n Value of num using pr1 is: %d", **pr1);

	/* Printing possible ways to find address of num*/
	printf("\n Address of num is: %p", &num);
	printf("\n Address of num using pr2 is: %p", pr2);
	printf("\n Address of num using pr1 is: %p", *pr1);

	/* Printing the value of pointer*/
	printf("\n Value of pointer pr2 is: %p", pr2);
	printf("\n Value of pointer pr2 using pr1 is: %p", *pr1);

	/* Printing ways to find address of pointer*/
	printf("\n Address of pointer pr2 is: %p", &pr2);
	printf("\n Address of pointer pr2 using pr1 is: %p", pr1);

	/* Printing double pointer value and address*/
	printf("\n Value of pointer pr1 is: %p", pr1);
	printf("\n Address of pointer pr1 is: %p", &pr1);

	return 0;
}
