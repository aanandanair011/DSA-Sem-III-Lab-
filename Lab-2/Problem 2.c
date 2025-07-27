#include <stdio.h>

int main() {
    int m, p1, p2, n;

    // Input
    printf("Enter dimensions of matrix A (m x p):\n");
    printf("Enter m: ");
    scanf("%d", &m);
    printf("Enter p (columns of A): ");
    scanf("%d", &p1);

    printf("Enter dimensions of matrix B (p x n):\n");
    printf("Enter p (rows of B): ");
    scanf("%d", &p2);
    printf("Enter n: ");
    scanf("%d", &n);

    // To Check if multiplication is possible
    if (p1 != p2) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 1;
    }

    int A[m][p1], B[p2][n], C[m][n];

    // Input matrix A
    printf("\nEnter elements of matrix A (%d x %d):\n", m, p1);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p1; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Input matrix B
    printf("\nEnter elements of matrix B (%d x %d):\n", p2, n);
    for (int i = 0; i < p2; i++) {
        for (int j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize matrix C to 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
        }
    }

    // Matrix multiplication: C = A x B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < p1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print result matrix C
    printf("\nResultant Matrix C (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
