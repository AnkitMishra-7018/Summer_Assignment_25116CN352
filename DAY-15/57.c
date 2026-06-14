// program to Reverse array
#include<stdio.h>
int main()
{
    int n,i,a[100];
    printf("enter the size of array -- ");
    scanf("%d",&n);
    printf("enter the elements of array -- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the reverse of array is -- ");
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
    return 0;
}