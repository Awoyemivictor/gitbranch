#include <stdio.h>
#include <stdlib.h>

#define PRINT_VAR(X) printf(#X " is %d at address %p\n", X, &X);

// Run this program using the console pauser or add your own getch, system("pause")

int main(int argc, char *argv[]) 
{
	int a = 3;
	PRINT_VAR(a);

	return (0);
}
