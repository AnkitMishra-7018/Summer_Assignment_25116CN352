//program to Recursive sum of digits
#include<stdio.h>
long  int sumofdigits(int n);
int main()
{
    int n;
    printf("enter a postive intger -- ");
    scanf("%d",&n);
    printf("sum of digits of %d is %ld",n,sumofdigits(n));
    return 0; 
}
long int sumofdigits(int n)
{
    if (n==0)
        return 0;
    else
        return (n%10)+sumofdigits(n/10);
}