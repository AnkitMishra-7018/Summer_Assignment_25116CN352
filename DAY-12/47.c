// program to Write function for Fibonacci
#include <stdio.h>

void printFibonacciSeries(int n) {
    long long t1 = 0, t2 = 1, nextTerm;

    if (n <= 0) 
    {
        printf("Please enter a positive integer.\n");
        return;
    }

    printf("Fibonacci Series (%d terms): ", n);

    for (int i = 1; i <= n; ++i)
    {
        printf("%lld ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() 
{
    int terms = 10; 
    printFibonacciSeries(terms);
    return 0;
}
