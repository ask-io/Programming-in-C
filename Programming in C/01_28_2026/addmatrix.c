//Addition of two matrices
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j;
    int a[10][10], b[10][10], sum[10][10];

    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 == r2 && c1 == c2) {
        printf("Enter elements of first matrix:\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                scanf("%d", &a[i][j]);
            }
        }

        printf("Enter elements of second matrix:\n");
        for (i = 0; i < r2; i++) {
            for (j = 0; j < c2; j++) {
                scanf("%d", &b[i][j]);
            }
        }

        printf("\nResultant Matrix (Sum):\n");
        for (i = 0; i < r1; i++) {
            for (j = 0; j < c1; j++) {
                sum[i][j] = a[i][j] + b[i][j];
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Matrix addition of different orders is not allowed.\n");
    }

    return 0;
}

