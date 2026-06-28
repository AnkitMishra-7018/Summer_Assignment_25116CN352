// program to Create inventory management system
#include <stdio.h>

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Product p[100];
    int n, i;

    printf("Enter number of products: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of Product %d:\n", i + 1);

        printf("Product ID: ");
        scanf("%d", &p[i].id);

        printf("Product Name: ");
        scanf("%s", p[i].name);

        printf("Quantity: ");
        scanf("%d", &p[i].quantity);

        printf("Price: ");
        scanf("%f", &p[i].price);
    }

    printf("\n========== INVENTORY ==========\n");
    printf("ID\tName\tQuantity\tPrice\n");

    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t\t%.2f\n",
               p[i].id,
               p[i].name,
               p[i].quantity,
               p[i].price);
    }

    return 0;
}