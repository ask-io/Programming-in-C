//To add elements of two matrices
#include<stdio.h>

int main()
{
        int arr[5][5], r, c, i, j;

        printf("Enter limit: ");
        scanf("%d", &n);

        for(i=0; i<n; i++)
        {
		for(j=0, j<n; j++)
		{
        	        printf("Enter value %d: ", j+1);
	                scanf("%d %d", &arr[i][j]);
        }

