// program to Input and display array
#include<stdio.h>
int main()
{
    int arr[100],n,i;
    printf("enter the size of array -- ");
    scanf("%d",&n);
    printf("enter the elements of array -- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the elements of array are --");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}