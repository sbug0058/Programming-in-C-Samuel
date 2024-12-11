#include <stdio.h>
#include "Ex1.c"
#include "Ex2.c"
#include "ex3.c"
#include "ex4.c"
#include "ex5.c"
#include "ex6.c"

void display_menu() {
    printf("\n==== Function Menu ====\n");
    printf("1. Factorial (Iterative & Recursive)\n");
    printf("2. Fibonacci (Iterative & Recursive)\n");
    printf("3. GCD (Iterative & Recursive)\n");
    printf("4. Decimal to Hexadecimal (Recursive)\n");
    printf("5. Reverse a String (Recursive)\n");
    printf("6. Analyze a String\n");
    printf("7. Transform a Number (Ceil & Floor)\n");
    printf("0. Exit\n");
    printf("=======================\n");
}

int main() {
    int choice;

    do {
        display_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                factorial_menu();
                break;

            case 2:
                fibonacci_menu();
                break;

            case 3:
                gcd_menu();
                break;

            case 4:
                hex_convert_menu();
                break;

            case 5:
                reverse_string_menu();
                break;

            case 6:
                analyze_string_menu();
                break;

            case 7:
                math_transform_menu();
                break;

            case 0:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
