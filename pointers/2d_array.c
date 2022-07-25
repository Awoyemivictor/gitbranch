#include <stdio.h>

/**
 * 2D Array - Creating a 2D array of element i and j
 * i will be less than 2
 * j will be less than 3
 *
 * Array will be 2 by 3 matrix
 * Return: 0;
 */

int main (void)
{
	int disp[2][3];
	int i,j;

	/* For loop to allow users to input variables for the 2D array
	 * i will be less than 2 while j will be less than 3
	 */
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("Enter value of disp[%d][%d:", i, j);
			scanf("%d", &disp[i][i]);
		}
	}

	/* for loop to print the input of user
	 */
	printf("The Two Dimensional array of the elements are:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", disp[i][j]);
			if (j == 2)
			{
				printf("\n");
			}
		}
	}

	return 0i;
}
