// program to Find sum of digits of a number
#include <stdio.h>
int main()
{
    int n,sum=0,r;
    printf("enter the number -- ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of digit is -- %d",sum);
    return 0;
}