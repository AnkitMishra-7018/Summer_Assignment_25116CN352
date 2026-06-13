// program to Write function for palindrome
#include<stdio.h>

int isnumberpalindrome(int num)
{
    int original=num;
    int reversed=0;
    int remainder;

    if (num<0) return 0;
    while (num!=0)
    {
    remainder=num%10;
    reversed=(reversed*10)+remainder;
    num=num/10;
    }
    return(original==reversed);
}
int main()
{
    int number=12321;
    if(isnumberpalindrome(number))
    {
        printf("%d is a palindrome number",number);
    }
    else
    {
        printf("%d is not a palindrome number",number);
    }
    return 0;
}