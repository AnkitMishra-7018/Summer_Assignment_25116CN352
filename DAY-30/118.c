// program to Create mini library system
#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int quantity;
};

int main() {
    struct Book books[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Book %d:\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &books[i].id);

        printf("Book Title: ");
        scanf("%s", books[i].title);

        printf("Author Name: ");
        scanf("%s", books[i].author);

        printf("Quantity: ");
        scanf("%d", &books[i].quantity);
    }

    printf("\n========== MINI LIBRARY ==========\n");
    printf("ID\tTitle\t\tAuthor\t\tQuantity\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%d\n",
               books[i].id,
               books[i].title,
               books[i].author,
               books[i].quantity);
    }

    return 0;
}