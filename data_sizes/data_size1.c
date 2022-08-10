#include <stdio.h>

// Using the size of operator

int main()
{
	char ch = ' ';
	int int_num = 0;
	float flt_num = 0.0f;
	double dbl_num = 0.0;

	printf("The size of char is: %ld-byte\n", sizeof(char));
	printf("The size of ch is: %ld-byte\n", sizeof ch );
	printf("The size of int is: %ld-byte\n", sizeof(int));
	printf("The size of int_num is: %ld-byte\n", sizeof int_num);
	printf("The size of float is: %ld-byte\n", sizeof(float));
	printf("The size of flt_num is: %ld-byte\n", sizeof flt_num);
	printf("The size of double is: %ld-byte\n", sizeof(double));
	printf("The size of dbl_num is: %ld-byte\n", sizeof dbl_num);

	return (0);
}
