// program to Move zeroes to end
#include<stdio.h>
int main()
{
    int n,i,a[100],count=0;
    printf("enter the size of array -- ");
    scanf("%d",&n);
    printf("enter the elements of array -- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[count++]=a[i];
        }
    }
    while(count<n)
    {
        a[count++]=0;
    }
    printf("the array after moving zeroes to end is -- ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}