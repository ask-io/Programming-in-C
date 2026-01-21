//Find the largest of 2 numbers

#include <stdio.h>
int main()
{
        int num1, num2;
        printf("Enter value of num1: ");
        scanf("%d", &num1);
        if(num1 > 0)
        {
                printf("%d is positive", num1);
        }
        else if(num1 < 0)
        {
                printf("%d is negative", num1);
        }
	else
	{
		printf("The value is 0");
	}
        return 0;
}



