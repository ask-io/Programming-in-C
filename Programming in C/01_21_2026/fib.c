//To print fibonacci series
#include <stdio.h>

int main() {
    int max, first = 0, second = 1, next = 0;

    printf("Enter the maximum value: ");
    scanf("%d", &max);

    printf("Fibonacci Series: ");
    while (next <= max) {
        printf("%d ", next);
        first = second;
        second = next;
        next = first + second;
    }
    return 0;
}
