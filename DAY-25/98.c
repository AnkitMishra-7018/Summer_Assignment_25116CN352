// program to Find common characters in strings
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

  
    for (i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]] = 1;
    }

    printf("Common characters: ");

  
    for (i = 0; str2[i] != '\0'; i++) {
        if (freq[(unsigned char)str2[i]] == 1) {
            printf("%c ", str2[i]);
            freq[(unsigned char)str2[i]] = 2; 
        }
    }

    printf("\n");

    return 0;
}