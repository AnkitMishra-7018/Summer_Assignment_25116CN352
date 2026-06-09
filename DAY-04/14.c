// program to find nth fibonacci term
#include <stdio.h>
int main()
{
    int n,a=0,b=1,next;
    printf("Enter the term number -- ");
    scanf("%d",&n);
    for(int i=3;i<=n;++i)
    {
        next=a+b;
        a=b;
        b=next;
    }
    printf("The %dth fibonacci term is %d",n,next);
    return 0;
}