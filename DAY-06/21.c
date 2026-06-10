// program to Convert decimal to binary
#include<stdio.h>
int main ()
{
    int n,r,ans=0,contri=1;
    printf("enter a decimal number -- ");
    scanf("%d",&n);
    while (n>0)
    {
        r=n%2;
        if(r==1)
        {
            ans=ans+contri;
            n=n/2;
            contri=contri*10;
        }
    }
        printf("binary equivalent is %d",ans);
    return 0;
}