// program to Check symmetric matrix
#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];

    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                printf("The matrix is not symmetric.\n");
                return 0;
            }
        }
    }

    printf("The matrix is symmetric.\n");

    return 0;
}