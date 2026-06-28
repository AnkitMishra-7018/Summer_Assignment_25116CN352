// program to Create menu-driven string operations system
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Length of string = %lu\n", strlen(str1));
                break;

            case 2:
                strcpy(temp, str1);
                printf("Copied String: %s\n", temp);
                break;

            case 3:
                printf("Enter second string: ");
                scanf("%s", str2);

                strcpy(temp, str1);
                strcat(temp, str2);

                printf("Concatenated String: %s\n", temp);
                break;

            case 4:
                printf("Enter second string: ");
                scanf("%s", str2);

                if (strcmp(str1, str2) == 0)
                    printf("Strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");
                break;

            case 5:
                strcpy(temp, str1);
                strrev(temp);     

                printf("Reversed String: %s\n", temp);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}