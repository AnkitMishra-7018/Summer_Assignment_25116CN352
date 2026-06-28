// program to Create contact management system
#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
    char email[50];
};

int main() {
    struct Contact c[100];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Contact %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", c[i].name);

        printf("Phone Number: ");
        scanf("%s", c[i].phone);

        printf("Email: ");
        scanf("%s", c[i].email);
    }

    printf("\n========== CONTACT LIST ==========\n");
    printf("Name\t\tPhone\t\tEmail\n");

    for (i = 0; i < n; i++) {
        printf("%s\t\t%s\t%s\n",
               c[i].name,
               c[i].phone,
               c[i].email);
    }

    return 0;
}