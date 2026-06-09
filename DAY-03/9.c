// program to check whether a number is pprime or not
#include <stdio.h>
int main()
{
    int i,n,flag=0;
    printf("enter the number -- ");
    scanf("%d",&n);
    if (n==0 || n==1)
    {
        flag=1;
    }
    else
    {
        for (i=2;i<=n/2;i++)
        {
            if (n%i==0)
            {
                  flag=1;
                  break;
            }
        }
    }
    if (flag==0)
    {
        printf("prime number");
    }
    else if (flag==1)
    {
        printf("not a prime number");
    }
    return 0;
}