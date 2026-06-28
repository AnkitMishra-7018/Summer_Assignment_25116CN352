// program to Create library management system
#include <stdio.h>

struct Book {
    int bookId;
    char title[50];
    char author[50];
    int quantity;
};

int main() {
    struct Book b[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Book %d:\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].bookId);

        printf("Book Title: ");
        scanf("%s", b[i].title);

        printf("Author Name: ");
        scanf("%s", b[i].author);

        printf("Quantity: ");
        scanf("%d", &b[i].quantity);
    }

    printf("\n========== LIBRARY RECORDS ==========\n");
    printf("ID\tTitle\tAuthor\tQuantity\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%s\t%d\n",
               b[i].bookId,
               b[i].title,
               b[i].author,
               b[i].quantity);
    }

    return 0;
}