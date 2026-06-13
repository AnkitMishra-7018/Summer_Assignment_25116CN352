// program to Find duplicates in array
#include <stdio.h>
int main()
{
    int arr[100], n, i, j, count;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array are: ");
    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1; 
            }
        }
        if (count > 1 && arr[i] != -1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}