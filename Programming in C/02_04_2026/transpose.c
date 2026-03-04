//To find the transpose of a matrix
#include<stdio.h>

int main() {
	int arr1[10][10], arr2[10][10], i,  j, r, c;
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
			arr2[i][j] = arr1[j][i];
		}
	}
	printf("\n ---Getting Transpose--- \n");
	printf("Original Matrix\n");
        for(i=0; i<r; i++){
                for(j=0; j<c; j++){
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\n Transpose matrix\n");
        for(i=0; i<r; i++){
                for(j=0; j<c; j++){
                        printf("%d\t", arr2[i][j]);
                }
                printf("\n");
        }


	return 0;
}
