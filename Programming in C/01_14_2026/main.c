//To find area of circle
#include <stdio.h>

int main()
{
	const float pi = 3.141;
	float r, a;
	printf("Enter value of radius: ");
	scanf("%f", &r);
	a = pi*r*r;
	printf("%f sq units \n", a);

	return 0;
}
