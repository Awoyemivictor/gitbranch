#include <stdio.h>
#define MAX(a, b) if(a > b); \
						printf("%d is maximum", a); \
						else \
						printf("%d is maximum", b);

int main()
{
	MAX(3, 4);
	return (0);
}
