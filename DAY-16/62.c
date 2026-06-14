// a program to Find maximum frequency element
#include <stdio.h>
int main() 
{
    int n, i, maxFreq = 0, maxElement;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
 {
        int freq = 1;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq > maxFreq) 
        {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }

    printf("The element with maximum frequency is: %d\n", maxElement);
    printf("Its frequency is: %d\n", maxFreq);

    return 0;
}