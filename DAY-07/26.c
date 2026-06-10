// program to Recursive Fibonacci
#include<stdio.h>
long  int fib(int n);
int main()
{
    int n;
    printf("enter a postive intger -- ");
    scanf("%d",&n);
    printf("fibonacci of %d is %ld",n,fib(n));
    return 0; 
}
long int fib(int n)
{
    if (n<=1)
        return n;
    else
        return fib(n-1)+fib(n-2);
}