// program to Union of arrays
#include <stdio.h>
int main() 
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int unionArr[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            unionArr[k++] = arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            unionArr[k++] = arr2[j++];
        } else {
            unionArr[k++] = arr1[i++];
            j++;
        }
    }

    while (i < n1) {
        unionArr[k++] = arr1[i++];
    }

    while (j < n2) {
        unionArr[k++] = arr2[j++];
    }

    printf("Union of arrays: ");
    for (int l = 0; l < k; l++) {
        printf("%d ", unionArr[l]);
    }
    printf("\n");

    return 0;
}