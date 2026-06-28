// program to Find column-wise sum
#include <stdio.h>
int main() {
    int matrix[10][10], row, col, i, j, sum;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", &row, &col);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Column-wise sum of the matrix:\n");
    for (j = 0; j < col; j++) {
        sum = 0;
        for (i = 0; i < row; i++) {
            sum += matrix[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, sum);
    }

    return 0;
}