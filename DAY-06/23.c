// program to Count set bits in a number
#include<stdio.h>
int main()
{
    int n, count = 0;
    printf("enter a number -- ");
    scanf("%d",&n);
    while(n)
    {
        n = n & (n-1);
        count++;
    }
    printf("number of set bits is %d",count);
    return 0;
}