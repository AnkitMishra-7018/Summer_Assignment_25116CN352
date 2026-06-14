// program to Rotate array right
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
    temp=a[n-1];
    for(i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
    printf("the right rotation of array is -- ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}