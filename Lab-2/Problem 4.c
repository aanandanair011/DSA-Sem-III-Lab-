#include <stdio.h>

int main() {
    int A[2][2];

    printf("Enter elements of 2x2 matrix A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nMatrix A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }


    int determinant = A[0][0] * A[1][1] - A[0][1] * A[1][0];


    printf("\nDeterminant of the matrix A is: %d\n", determinant);

    return 0;
}
