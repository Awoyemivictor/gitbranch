#include <stdio.h>

/**
 * main - do while loop
 *
 * Return: 0
 */

int main(void)
{
	int i = 5;
	int j = 5;

	printf("Start of do-while");
	do
	{
		printf("%d\n", ++i);
	}
	while (i < 5);
	printf("End of do-while\n");

	while (j < 5)
	{
		printf("%d\n", ++i);
	}
	printf("End of while\n");

	return (0);
}
