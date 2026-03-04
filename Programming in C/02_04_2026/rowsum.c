//To Display the Row Sum
#include<stdio.h>

int main() {
        int arr1[10][10], arr2[10][10], i,  j, r, c, s=0;
        printf("Enter no. of rows and columns: ");
        scanf("%d %d", &r, &c);

        for(i=0; i<r; i++){
                for(j=0; j<c; j++){
                        printf("Enter value for [%d][%d]: ", i, j);
                        scanf("%d", &arr1[i][j]);
                }
        }
	for(i=0; i<r; i++){
                for(j=0; j<c; j++){
			s = s + arr1[i][j];
                }
                printf("Row sum of row %d: %d \n", i+1, s);
		s=0;
        }
	return 0;
}

