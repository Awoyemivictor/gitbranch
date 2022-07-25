#include <stdio.h>

/**
 * main - nested loops
 *
 * Return: 0.
 */

int main(void)
{
	int i;
	int j;

	for (i = 4; i <= 4; i++)
	{
		for (j = 1; j <= 3; j++)
		{
			printf("%d x %d\n = %d\n", i, j, i * j);
		}
	}

	return (0);
}
