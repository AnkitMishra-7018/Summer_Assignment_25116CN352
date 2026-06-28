// program to Remove duplicate characters
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int visited[256] = {0};
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("String after removing duplicates: ");

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            continue;

        if (visited[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            visited[(unsigned char)str[i]] = 1;
        }
    }

    printf("\n");

    return 0;
}