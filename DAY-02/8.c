// program to Check whether a number is palindrome
#include <stdio.h>
int main()
{
    int n,r,rev=0,temp;
    printf("enter the number -- ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(temp==rev)
        printf("number is palindrome");
    else
        printf("number is not palindrome");
    return 0;
}