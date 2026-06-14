// program to Rotate array left
#include<stdio.h>
int main()
{
    int n,i,a[100],temp;
    printf("enter the size of array -- ");
    scanf("%d",&n);
    printf("enter the elements of array -- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    temp=a[0];
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=temp;
    printf("the left rotation of array is -- ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}