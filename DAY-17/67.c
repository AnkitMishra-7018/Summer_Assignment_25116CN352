// program to Intersection of arrays
#include <stdio.h>
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int intersectionArr[n1 < n2 ? n1 : n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            intersectionArr[k++] = arr1[i++];
            j++;
        }
    }

    printf("Intersection of arrays: ");
    for (int l = 0; l < k; l++) {
        printf("%d ", intersectionArr[l]);
    }
    printf("\n");

    return 0;
}