#include <unistd.h>

/**
 * Using a loop to iterate through all the letters.
 */

void print_char(char c)
{
	write(1, &c, 1);
}

void print_alphabet(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		print_char(c);
		c = c + 1;
	}
}

int main(void)
{
	print_alphabet();
	print_char('\n');

	return (0);
}
