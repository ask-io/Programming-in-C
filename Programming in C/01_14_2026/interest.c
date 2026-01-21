//To calculate simple interest
#include <stdio.h>

int main()
{	
	float si, i , p, n;
	printf("Enter value of principle: ");
	scanf("%f", &p);
        printf("Enter value of interest: ");
        scanf("%f", &i);
        printf("Enter value of duration: ");
        scanf("%f", &n);
	si = p*i*n/10;
	printf("The simple interest is %f \n", si);
	return 0;
}
