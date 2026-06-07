// program to Reverse a number
#include <stdio.h>
int main()
{
    int n,r,rev=0;
    printf("enter the number -- ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("reversed number is -- %d",rev);
    return 0;
}