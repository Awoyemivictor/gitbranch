#include <stdio.h>

/* Outputting a character with putc() */

int main()
{
	int ch;

	ch = 65; /* the numeric value of A */

	printf("The character that has numeric value of 65 is:\n");
	putc(ch, stdout);
	printf("\n");

	return (0);
}
