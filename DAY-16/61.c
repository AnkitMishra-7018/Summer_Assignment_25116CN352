// program to Find missing number in array
#include <stdio.h>
int main()
{
    int n, i, sum = 0, total;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    total = n * (n + 1) / 2;
    printf("The missing number is: %d\n", total - sum);
    return 0;
}