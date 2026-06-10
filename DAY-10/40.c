// a program to Print character pyramid.
//    A
//   ABA
//  ABCBA
// ABCDCBA
//ABCDEDCBA
#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", j + 64);
        }
        for (j = i - 1; j >= 1; j--)
        {
            printf("%c", j + 64);
        }
        printf("\n");
    }
    return 0;
}