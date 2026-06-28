// program to Reverse a string
#include <stdio.h>
int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0') {
        length++;
    }

    printf("Reversed string is: ");
    for (int i = length - 2; i >= 0; i--) {  
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}