// program to Create menu-driven array operations system
#include <stdio.h>

int main() {
    int arr[100], n, i, choice, pos, value, found;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n===== ARRAY OPERATIONS MENU =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Array Elements: ");
                for (i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2:
                printf("Enter position (1 to %d): ", n + 1);
                scanf("%d", &pos);

                printf("Enter value: ");
                scanf("%d", &value);

                if (pos < 1 || pos > n + 1) {
                    printf("Invalid Position!\n");
                } else {
                    for (i = n; i >= pos; i--)
                        arr[i] = arr[i - 1];

                    arr[pos - 1] = value;
                    n++;

                    printf("Element inserted successfully.\n");
                }
                break;

            case 3:
                printf("Enter position to delete (1 to %d): ", n);
                scanf("%d", &pos);

                if (pos < 1 || pos > n) {
                    printf("Invalid Position!\n");
                } else {
                    for (i = pos - 1; i < n - 1; i++)
                        arr[i] = arr[i + 1];

                    n--;
                    printf("Element deleted successfully.\n");
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);

                found = 0;
                for (i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (!found)
                    printf("Element not found.\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);

    return 0;
}