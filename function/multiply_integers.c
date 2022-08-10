#include <stdio.h>

/**
* Function - Multiplication of two integers
* Return: Calculated result
*/

int multiply_integers(int x, int y)
{
	int result;
	result = x * y;
	return result;
}

int main()
{
	int multiply;

	multiply = multiply_integers(3, 5);
	printf("The result of 3 * 5 = %d\n", multiply);

	return 0;
}
