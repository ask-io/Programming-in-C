//To find the maximum and minimum value in an array (1D)
#include<stdio.h>

int main()
{
	int arr[100], n, max, min, i, j, k;

	printf("Enter limit: ");
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		printf("Enter value %d: ", i+1);
		scanf("%d", &arr[i]);
	}

	max = arr[0];
	for(j=0; j<n; j++)
	{
		if(max<arr[j])
		{
		max = arr[j];
		}
	}
	min = arr[0];
	for(k=0; k<n; k++)
	{
		if(min>arr[k])
		{
		min = arr[k];
		}
	}

	printf("\nThe maximum value in the array is %d\n", max);
	printf("The minimum value in the array is %d\n", min);

	return 0;
}
