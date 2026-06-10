//program to Find x^n without pow()
#include<stdio.h>
int main()
{
    int i,x,n,a=1;
    printf("enter a number and its power -- ");
    scanf("%d%d",&x,&n);
    for(i=0;i<n;i++)
    {
        a=a*x;
    }
    printf("%d to the power %d is %d",x,n,a);
    return 0;
}