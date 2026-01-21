//Find the factorial using while loop
#include <stdio.h>

int main()
{
	int n, f = 1, i = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(n>0)
	{
		f = f*i;
		i = i + 1;
		n = n - 1;
	}
	printf("%d\n", f);
	return 0;
}
