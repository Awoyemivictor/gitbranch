#include <stdio.h>
// Using the logical OR operator

int main()
{
	int num;

	printf("Enter a signle digit that can be divided\nby both 2 and 3:\n");

	for (num = 1; (num%2 != 0) || (num%3 != 0); )
		num = getchar() -'0';
	printf("You got such a number: %d\n", num);

	return (0);
}
