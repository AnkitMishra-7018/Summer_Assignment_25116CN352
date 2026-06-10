// program to Recursive reverse number
#include<stdio.h>
long  int reversenumber(int n);
int main()
{
    int n;
    printf("enter a postive intger -- ");
    scanf("%d",&n);
    printf("reverse of %d is %ld",n,reversenumber(n));
    return 0; 
}
long int reversenumber(int n)
{
    static long int rev=0;
    if (n>0)
    {
        rev=rev*10+n%10;
        reversenumber(n/10);
    }
    return rev;
}