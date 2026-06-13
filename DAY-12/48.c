// program to Write function for perfect number
#include <stdio.h>

int isPerfectNumber(int num) {
    int sum = 0;

   
    if (num <= 1) return 0;

    // Find and add all proper divisors
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
 
    return (sum == num);
}

int main() {
    int number = 28; 
    
    if (isPerfectNumber(number)) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }
    
    return 0;
}
