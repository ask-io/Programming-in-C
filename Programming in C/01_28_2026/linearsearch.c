//To find a target element through linear search
#include<stdio.h>

int main()
{
        int arr[100], n, i, t, j, f;

        printf("Enter limit: ");
        scanf("%d", &n);

        for(i=0; i<n; i++)
        {
                printf("Enter value %d: ", i+1);
                scanf("%d", &arr[i]);
        }

	printf("Enter a target: ");
	scanf("%d", &t);

	for(j=0; j<n; j++)
	{
		if(arr[j]==t)
		{
			printf("Found %d at index %d\n", t, j);
			f = 1;
		}
	}
	if(f == 0)
	{
		printf("The element was not found\n");
	}
	return 0;
}

