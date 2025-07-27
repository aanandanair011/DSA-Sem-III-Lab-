#include <stdio.h>

int main() {
    int m, n;
    printf("Enter number of rows (m): ");
    scanf("%d", &m);
    printf("Enter number of columns (n): ");
    scanf("%d", &n);

    int A[m][n];

    // Input matrix
    printf("\nEnter elements of the matrix (%d x %d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    int found = 0;

    // Check each row for saddle point
    for (int i = 0; i < m; i++) {
        int row_min = A[i][0];
        int col_index = 0;

        // Find minimum in the current row
        for (int j = 1; j < n; j++) {
            if (A[i][j] < row_min) {
                row_min = A[i][j];
                col_index = j;
            }
        }

        // Check if it's the maximum in that column
        int is_saddle = 1;
        for (int k = 0; k < m; k++) {
            if (A[k][col_index] > row_min) {
                is_saddle = 0;
                break;
            }
        }

        if (is_saddle) {
            printf("\nSaddle point found at position A[%d][%d] = %d\n", i, col_index, row_min);
            found = 1;
        }
    }

    if (!found) {
        printf("\nNo saddle point found in the matrix.\n");
    }

    return 0;
}
