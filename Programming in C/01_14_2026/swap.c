//To swap two numbers without third variable
#include <stdio.h>

int main()
{
	float a, b;
	printf("Enter value of a: ");
	scanf("%f", &a);
        printf("Enter value of b: ");
        scanf("%f", &b);

	a = a+b;
	b = a-b;
	a = a-b;

	printf("The value of a is %.1f and value of b is %.1f \n", a, b);
	return 0;
}
