// program to Frequency of an element
#include <stdio.h>
int main()
{
    int arr[100], n, i, key, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }
    if (count > 0)
    {
        printf("Element found %d times in the array\n", count);
    }
    else
    {
        printf("Element not found in the array\n");
    }
    return 0;
}