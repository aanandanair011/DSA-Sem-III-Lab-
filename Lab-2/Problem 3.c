#include <stdio.h>

int main() {
    int m, n;

    // Input matrix dimensions
    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int A[m][n], T[n][m]; // A is original, T is transpose

    // Input matrix A
    printf("\nEnter elements of matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Compute transpose
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }

    // Print original matrix
    printf("\nOriginal Matrix A (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    // Print transposed matrix
    printf("\nTranspose of Matrix A (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d\t", T[i][j]);
        }
        printf("\n");
    }

    return 0;
}
