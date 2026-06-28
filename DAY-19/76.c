// program to Find diagonal sum
#include <stdio.h>
int main()
{
    int m, n, c, d, first[10][10], sum = 0;

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);

    printf("Enter elements of matrix\n");

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            scanf("%d", &first[c][d]);

    for (c = 0; c < m; c++)
        sum += first[c][c];

    printf("Sum of diagonal elements:- %d\n", sum);

    return 0;
}