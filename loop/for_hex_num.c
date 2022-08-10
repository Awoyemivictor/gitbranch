#include <stdio.h>

// Converting 0 through 15 to hex numbers

int main()
{
	int i;

	printf("Hex(uppercase)\tHex(lowercase)\tDecimal\n");

	for (i = 0; i < 16; i++)
	{
		printf("%X\t\t%x\t\t%d\n", i, i, i);
	}

	return (0);
}
