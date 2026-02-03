//To find a target element through linear search
#include <stdio.h>

int main() {
    int arr[100], n, i, t, f = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target element to search: ");
    scanf("%d", &t);

    for(i = 0; i < n; i++) {
        if(arr[i] == t) {
            printf("Target found at position %d\n", i);
            f = 1;
            break; 
        }
    }

    if(f == 0) {
        printf("Target not found in the array.\n");
    }

    return 0;
}
