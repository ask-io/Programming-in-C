//To find the avgerage of 3 numbers
#include <stdio.h>

int main()
{
	float n1, n2, n3, avg;
	printf("Enter value 1: ");
	scanf("%f", &n1);
        printf("Enter value 2: ");
        scanf("%f", &n2);
        printf("Enter value 3: ");
        scanf("%f", &n3);
	avg = (n1+n2+n3)/3;
	printf("The average value is %f \n", avg);
	return 0;
}
