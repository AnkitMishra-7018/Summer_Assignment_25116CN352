// program to Find largest prime factor
#include <stdio.h>
int main()
{
    int n,i;
    printf("enter a number -- ");
    scanf("%d",&n);
    printf("largest prime factor of %d is -- ",n);
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            n=n/i;
        }
    }
    printf("%d",i-1);
    return 0;
}