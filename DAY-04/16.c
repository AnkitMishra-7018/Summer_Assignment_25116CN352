// program to print armstrong number in a range
#include <stdio.h>
int main()
{
    int n1,n2,a,r,result;
    printf("Enter the range -- ");
    scanf("%d%d",&n1,&n2);
    printf("Armstrong numbers between %d and %d are -- ",n1,n2);
    for(int i=n1;i<=n2;++i)
    {
        a=i;
        result=0;
        while(a!=0)
        {
            r=a%10;
            result+=r*r*r;
            a/=10;
        }
        if(result==i)
            printf("%d ",i);
    }
    return 0;
}