// program to print prime number in a range
#include <stdio.h>
int main()
{
    int a,b,i,flag;
    printf(" enter the two numbers of the range -- ");
    scanf("%d%d",&a,&b);
    printf(" prime numbers between %d and %d are --",a,b);
    while (a<b)
    {
        flag=0;
        if (a<=1)
        {
            ++a;
            continue;
        }
        for(i=2;i<=a/2;i++)
        {
            if (a%i==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
        printf("%d",a);
        ++a;
    }
    return 0;
}