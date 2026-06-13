// program to Find largest and smallest element
#include<stdio.h>
int main()
{
    int arr[100],n,i,largest,smallest;
    printf("enter the size of array -- ");
    scanf("%d",&n);
    printf("enter the elements of array -- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    smallest=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        if(arr[i]<smallest)
        {
            smallest=arr[i];
        }
    }
    printf("the largest element of array is -- %d",largest);
    printf("\nthe smallest element of array is -- %d",smallest);
    return 0;
}