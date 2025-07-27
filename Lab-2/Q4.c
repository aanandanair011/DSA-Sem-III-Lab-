#include <stdio.h>

int main() {
    int matrix[10][10];
    int i, j, size;
    int isIdentity = 1;

    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &size);

    printf("Enter the elements of the %dx%d matrix:\n", size, size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if it's an identity matrix
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == j && matrix[i][j] != 1) {
                isIdentity = 0;
                break;
            } else if (i != j && matrix[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
        if (!isIdentity) {
            break;
        }
    }

    if (isIdentity) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is NOT an identity matrix.\n");
    }

    return 0;
}
