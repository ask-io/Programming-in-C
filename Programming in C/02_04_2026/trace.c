//To find the trace of a matrix
#include<stdio.h>

int main() {
        int arr1[10][10], s=0 , i,  j, r, c;
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
                        if(i == j){
				s = s + arr1[i][j];
			}
                }
        }
	printf("---Original Matrix---\n");
        for(i=0; i<r; i++){
                for(j=0; j<c; j++){
                        printf("%d\t", arr1[i][j]);
                }
                printf("\n");
        }

	printf("\nThe trace is the matrix is: %d\n", s);


	return 0;
}
