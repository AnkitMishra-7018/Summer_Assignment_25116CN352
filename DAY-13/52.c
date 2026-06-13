// program to Count even and odd elements
#include<stdio.h>
int main()
{
    int arr[100],n,i,even=0,odd=0;
    printf("enter the size of array -- ");
    scanf("%d",&n);
    printf("enter the elements of array -- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("the number of even elements in array is -- %d",even);
    printf("\nthe number of odd elements in array is -- %d",odd);
    return 0;
}