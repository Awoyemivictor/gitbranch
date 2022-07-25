#include <stdio.h>

/**
 * main - creating a for loop
 *
 * Return: 0
 */

int main(void)
{
	/*
	 * for (<intializers>; <conditions>; <staments>)
	 * {
	 * repitive codes
	 * }
	 */

	int i = 0, j = 1, k = 2;

	for (i = 0, j = 1, k = 2; i < 5, i < 10, k < 8; ++i, ++j, ++k);
	{
		printf("%d\n", i);
	}

	return (0);
}
