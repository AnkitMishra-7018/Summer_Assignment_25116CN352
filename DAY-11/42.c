// program to Write function to find maximum
#include<stdio.h>
int max(int a, int b);

int main()
{
    int x,y,maximum;
    printf("enter two numbers -- ");
    scanf("%d%d",&x,&y);
        maximum=max(x,y);
        printf("maximum of %d and %d is %d",x,y,maximum);
        return 0;
}

int max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}