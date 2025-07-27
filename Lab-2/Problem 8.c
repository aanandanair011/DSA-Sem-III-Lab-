#include <stdio.h>

int main() {
    int arr[2][2][2];
    int sum = 0;

    // Input elements
    printf("Enter elements for 2x2x2 array:\n");
    for (int i = 0; i < 2; i++) {
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("arr[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
                sum += arr[i][j][k]; // Add to sum while reading
            }
        }
    }

    // Print sum
    printf("\nSum of all elements in the 3D array = %d\n", sum);

    return 0;
}
