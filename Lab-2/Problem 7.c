#include <stdio.h>

int main() {
    int arr[3][3][3];
    int target, found = 0;

    // Input elements
    printf("Enter elements for 3x3x3 array:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nLayer %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("arr[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // Input element to search
    printf("\nEnter the element to search: ");
    scanf("%d", &target);

    // Search for the element
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (arr[i][j][k] == target) {
                    printf("Element %d found at position: Layer = %d, Row = %d, Column = %d\n", target, i, j, k);
                    found = 1;
                }
            }
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
