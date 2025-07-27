#include <stdio.h>

int main() {
    int m, n, i, j;


    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);


    int A[m][n], B[m][n], C[m][n];


    printf("\nEnter elements of Matrix A (%dx%d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }


    printf("\nEnter elements of Matrix B (%dx%d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }


    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }


    printf("\nSum Matrix C = A + B:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

