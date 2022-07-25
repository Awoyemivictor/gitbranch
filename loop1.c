#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	/**
	 * while (<condition>)
	 * {
	 *	<body of the loop>
	 * }
	 */
	
	char c = 'a';

	while (c <= 'z')
	{
		printf("%c\n", c);
		c++;
	}
}
