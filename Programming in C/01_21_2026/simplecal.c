//Simple Calculator
#include <stdio.h>

int main()
{
        float a, b, s;
	char o;
        printf("Enter value 1: ");
        scanf("%f", &a);
        printf("Enter value 2: ");
        scanf("%f", &b);
        printf("Enter Operation: ");
        scanf(" %c", &o);
	switch(o)
	{
	case '+': s = a+b;
		  printf("Sum is %.2f\n", s);
		  break;
	case '-': s = a-b;
                  printf("Difference is %.2f\n", s);
                  break;
	case '*': s = a*b;
                  printf("Product is %.2f\n", s);
                  break;
        case '/': s = a/b;
                  printf("Quotient is %.2f\n", s);
                  break;
	default: printf("Invalid Input\n");
	}

	return 0;
}

