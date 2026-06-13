// program to Find sum and average of array
#include<stdio.h>
int main()
{
    int arr[100],n,i,sum=0;
    float avg;
    printf("enter the size of array -- ");
    scanf("%d",&n);
    printf("enter the elements of array -- ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("the sum of array is -- %d",sum);
    printf("\nthe average of array is -- %f",avg);
    return 0;
}