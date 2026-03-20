// Sum of Array Elements
#include <stdio.h>
int sumarray(int arr[], int size){
    int sum=0;
    for(int i=0;i<size; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[20], n, i;
    printf("Enter limit: ");
    scanf("%d", &n);
    for(i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("The sum of array elements: %d", sumarray(arr, n));
    return 0;
}