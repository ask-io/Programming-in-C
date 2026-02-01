//To find the maximum and minimum value in an array (1D)
#include<stdio.h>

int main()
{
    int arr[100], n, max, min, i, maxindex, minindex;

    printf("Enter limit: ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter value %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];
    maxindex = minindex = 0;

    for(i=1; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            maxindex = i;
        }
        if(arr[i] < min)
        {
            min = arr[i];
            minindex = i;
        }
    }

    printf("\nThe maximum value is %d at index %d", max, maxindex);
    printf("\nThe minimum value is %d at index %d\n", min, minindex);

    return 0;
}
