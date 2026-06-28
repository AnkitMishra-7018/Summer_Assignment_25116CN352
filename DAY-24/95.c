// program to Find longest word
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], longest[100];
    int i = 0, len = 0, maxLen = 0, start = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                strncpy(longest, &str[start], len);
                longest[len] = '\0';
            }
            len = 0;
            start = i + 1;
        }
        i++;
    }

    if (len > maxLen) {
        maxLen = len;
        strncpy(longest, &str[start], len);
        longest[len] = '\0';
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}