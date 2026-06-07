// program to Count digits in a number
#include <stdio.h>
int main()
{
    int n,count=0;
    printf("enter the number --");
    scanf("%d",&n);
    if(n==0)
    {count=1;
    }
    else
    {
        while(n!=0)
        {
            n=n/10;
            count++;
        }
    }
    printf("the number of digits in the given number is : %d",count);
    return 0;
}