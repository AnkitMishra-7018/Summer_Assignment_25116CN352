// program to Write function to find sum of two numbers
#include<stdio.h>
int add(int a, int b);

int main()
{
    int x,y,sum;
    printf("enter two numbers -- ");
    scanf("%d%d",&x,&y);
    sum=add(x,y);
    printf("sum of %d and %d is %d",x,y,sum);
    return 0;
}

int  add(int a, int b)
{
    return a+b;
}
