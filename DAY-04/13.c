// program to generate fibonacci series
#include <stdio.h>
int main()
{
int i,n,a=0,b=1;
int next=(a+b);
printf("Enter the number of terms -- ");
scanf("%d",&n);
printf("fibonacci series: %d%d",a,b);
for(i=3;i<=n;++i)
{
    printf("%d",next);
    a=b;
    b=next;
    next=a+b;
}
return 0;
}
