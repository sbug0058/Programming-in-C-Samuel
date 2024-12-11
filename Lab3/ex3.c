#include <stdio.h>
#define MAX_ATTEMPTS 5
#define PIN_CODE 1234
int main() {
    int entered_pin;
    int attempts = 0;
    printf("Welcome! Please enter your 4-digit PIN.\n");
    while (attempts < MAX_ATTEMPTS) {
        printf("Enter PIN: ");
        scanf("%d", &entered_pin);

        if (entered_pin == PIN_CODE) {
            printf("PIN correct. Access granted!\n");
            return 0;
        } else {
            attempts++;
            printf("Incorrect PIN. You have %d attempts remaining.\n", MAX_ATTEMPTS - attempts);
        }
    }
    printf("Too many failed attempts. Locking out.\n");
    return 1;
}
