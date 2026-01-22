#include <stdio.h>

int main()
{
    float a, b, s;
    char o, op;
    
    do
    {
        printf("\n---Enter Operation---\n + : Addition\n - : Subtraction\n * : Multiplication\n / : Division\n");
        scanf(" %c", &o);        
        
        printf("Enter value 1: ");
        scanf("%f", &a);
        printf("Enter value 2: ");
        scanf("%f", &b);

        switch(o)
        {
            case '+': s = a + b;
                      printf("Sum is %.2f\n", s);
                      break;
            case '-': s = a - b;
                      printf("Difference is %.2f\n", s);
                      break;
            case '*': s = a * b;
                      printf("Product is %.2f\n", s);
                      break;
            case '/': s = a / b;
                          printf("Quotient is %.2f\n", s);
                      break;
            default:  printf("Invalid Input\n");
        }

        printf("\nEnter 'Y' to continue or any other key to quit: ");
        scanf(" %c", &op);

    } while(op == 'y' || op == 'Y');

    return 0;
}