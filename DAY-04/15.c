//program to check armstrong nummber
#include <stdio.h>
int main()
{
    int n,a,r,result=0;
    printf("Enter a number -- ");
    scanf("%d",&n);
    a=n;
    while(a!=0)
    {
        r=a%10;
        result+=r*r*r;
        a/=10;
    }
    if(result==n)
        printf("%d is an armstrong number",n);
    else
        printf("%d is not an armstrong number",n);
    return 0;
}