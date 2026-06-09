// program to find LCM of two numbers
#include <stdio.h>
int main()
{
    int a,b,i,lcm;
    printf(" enter the two numbers -- ");
    scanf("%d%d",&a,&b);
    for (i=1;i<=a && i<=b;i++)
    {
        if (a%i==0 && b%i==0)
        {
            lcm=i;
        }
    }
    printf(" LCM of %d and %d is -- %d",a,b,(a*b)/lcm);
    return 0;
}