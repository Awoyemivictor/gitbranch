#include <stdio.h>
#define PI 3.1415
#define circlearea(r) (PI*r*r)

int main()
{
	float r, area;
	printf("Enter the value of radius: ");
	scanf("%f", &r);

	// see here is the use of function like macro
	area=circlearea(r);
	printf("Area = %.2f", area);

	return (0);

}
