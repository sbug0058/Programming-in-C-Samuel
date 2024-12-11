#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100

typedef struct {
    char code[10];
    char name[50];
    double price;
    int quantity;
} Item;

void display_menu() {
    printf("\nMenu Options:\n");
    printf("1. Add items to shopping cart\n");
    printf("2. Show current total\n");
    printf("3. Check out\n");
    printf("4. Cancel session\n");
    printf("q. Quit\n");
}

void display_items(Item items[], int num_items) {
    printf("\nAvailable items:\n");
    for (int i = 0; i < num_items; i++) {
        printf("%s - %s - $%.2f\n", items[i].code, items[i].name, items[i].price);
    }
}

void add_to_cart(Item items[], int num_items, Item cart[], int *cart_size) {
    char item_code[10];
    int quantity;

    printf("Enter the code of the item to add: ");
    scanf("%s", item_code);

    int item_found = 0;
    for (int i = 0; i < num_items; i++) {
        if (strcmp(item_code, items[i].code) == 0) {
            item_found = 1;
            printf("Enter quantity: ");
            scanf("%d", &quantity);
            if (quantity > 0) {
                items[i].quantity = quantity;
                cart[*cart_size] = items[i];
                (*cart_size)++;
                printf("%d %s(s) added to cart.\n", quantity, items[i].name);
            } else {
                printf("Invalid quantity.\n");
            }
            break;
        }
    }
    if (!item_found) {
        printf("Item not found.\n");
    }
}

void show_total(Item cart[], int cart_size) {
    double total = 0.0;
    for (int i = 0; i < cart_size; i++) {
        total += cart[i].price * cart[i].quantity;
    }
    printf("\nCurrent total: $%.2f\n", total);
}

void checkout(Item cart[], int cart_size) {
    if (cart_size == 0) {
        printf("\nYour cart is empty.\n");
        return;
    }

    printf("\nItemized bill:\n");
    double total = 0.0;
    for (int i = 0; i < cart_size; i++) {
        double item_total = cart[i].price * cart[i].quantity;
        total += item_total;
        printf("%d x %s - $%.2f\n", cart[i].quantity, cart[i].name, item_total);
    }
    printf("Total: $%.2f\n", total);

    printf("\nCheckout complete. Starting new session...\n");
    cart_size = 0;
}

void cancel_session(Item cart[], int *cart_size) {
    char confirm;
    printf("Are you sure you want to cancel the current session? (y/n): ");
    scanf(" %c", &confirm);
    if (confirm == 'y' || confirm == 'Y') {
        *cart_size = 0;
        printf("Session cancelled. Starting new session...\n");
    } else {
        printf("Cancellation aborted.\n");
    }
}

int main() {
    Item items[] = {
        {"C001", "Apple", 0.5, 0},
        {"C002", "Banana", 0.3, 0},
        {"C003", "Orange", 0.7, 0},
        {"C004", "Milk", 1.5, 0},
        {"C005", "Bread", 2.0, 0}
    };
    int num_items = sizeof(items) / sizeof(items[0]);

    Item cart[MAX_ITEMS];
    int cart_size = 0;

    char choice;
    while (1) {
        display_menu();
        printf("\nEnter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case '1':
                display_items(items, num_items);
                add_to_cart(items, num_items, cart, &cart_size);
                break;
            case '2':
                show_total(cart, cart_size);
                break;
            case '3': {
                char confirm;
                printf("Are you sure you want to check out? (y/n): ");
                scanf(" %c", &confirm);
                if (confirm == 'y' || confirm == 'Y') {
                    checkout(cart, cart_size);
                    cart_size = 0;
                } else {
                    printf("Checkout aborted.\n");
                }
                break;
            }
            case '4':
                cancel_session(cart, &cart_size);
                break;
            case 'q': {
                char confirm;
                printf("Are you sure you want to quit? (y/n): ");
                scanf(" %c", &confirm);
                if (confirm == 'y' || confirm == 'Y') {
                    printf("Exiting program.\n");
                    return 0;
                } else {
                    printf("Quit aborted.\n");
                }
                break;
            }
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
