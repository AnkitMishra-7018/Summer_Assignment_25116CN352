// program to Write function for Armstrong
#include <stdio.h>
#include <math.h>


int isArmstrong(int num) 
{
    int originalNum = num;
    int temp = num;
    int digits = 0;
    int sum = 0;
    int remainder;

    if (num < 0) return 0;
     while (temp != 0) 
    {
        digits++;
        temp /= 10;
    }
    temp = num;
    while (temp != 0)
    {
        remainder = temp % 10;
        sum += (int)round(pow(remainder, digits));
        temp /= 10;
    }
  
    return (sum == originalNum);
}

int main() 
{
    int number = 1634;
    if (isArmstrong(number))
    {
        printf("%d is an Armstrong number.\n", number);
    } 
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }
    
    return 0;
}