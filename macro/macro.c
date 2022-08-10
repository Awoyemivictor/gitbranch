#include <stdio.h>
#deffine AREA(x) (3.14*x*x)
#define PERIMETER(y) (2*3.14*y)

int main()
{
	int radius;

	printf("\n Enter radius of the circle : ");
	scanf("%d", &radius);
	printf("\n Area = %f", AREA(radius));
	printf("\n Perimeter = %f", PERIMETER(radius));

	return (0);
}
