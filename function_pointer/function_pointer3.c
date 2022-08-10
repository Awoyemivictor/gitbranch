#include <stdio.h>
// Function Pointers in C/C++

void PrintHello(char *name)
{
	printf("Hello\n");
}

int Add(int a, int b)
{
	return a+b;
}

int main()
{
	void (*ptr)();
	ptr = PrintHello;
	ptr("Tom");
}
