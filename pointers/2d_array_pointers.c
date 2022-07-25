#include <stdio.h>

/*
 * Displaying the address of each array elements
 *
 * Return: 0;
 */

int main (void)
{
	int abc[5][4] = {
			{0, 1, 2, 3},
			{4, 5, 6, 7},
			{8, 9, 10, 11},
			{12, 13, 14, 15},
			{16, 17, 18, 19},
			};
	int i,j;

	for (i = 0; i <=4; i++)
	{
		printf("%p ", abc[i]);
	}
}
