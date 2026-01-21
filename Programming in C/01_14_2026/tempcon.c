//To convert celcius to farenheit
#include <stdio.h>

int main()
{
	float f, c;
	printf("Enter Temperature in Celcius: ");
	scanf("%f", &c);
	f = (c*9/5)+32;
	printf("%f C is %f F \n", c,f);
	return 0;
}
