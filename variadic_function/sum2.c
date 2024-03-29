#include <stdio.h>
#include <stdarg.h>

int sum(int x, int y, ...);

int main(void)
{
	int n;

	n = sum(10, 20, 30, 40, 50);
	printf("%d\n", n);

	return (0);
}

int sum(int x, int y, ...)
{
	va_list mynumbers;
	va_start(mynumbers, y);
	int result;
	int z = va_arg(mynumbers, int);
	int k = va_arg(mynumbers, int);
	int m = va_arg(mynumbers, int);
	result = x + y + z + k + m;
	va_end(mynumbers);

	return (result);
}
