#include <stdio.h>
#include <string.h>

void decimal_to_hex(int n) {
    if (n == 0)
        return;

    int remainder = n % 16;
    decimal_to_hex(n / 16); // Recursive call for the next higher place value

    // Convert remainder to hexadecimal character
    if (remainder < 10)
        printf("%d", remainder);
    else
        printf("%c", 'A' + (remainder - 10));
}

void reverse_string(char *str, int start, int end) {
    if (start >= end)
        return;

    // Swap the first and last characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call for the remaining substring
    reverse_string(str, start + 1, end - 1);
}

int main() {
    int number = 255; // Example number
    printf("Hexadecimal representation of %d: 0x", number);
    if (number == 0)
        printf("0"); // Special case for 0
    else
        decimal_to_hex(number);
    printf("\n");
    return 0;

    char str[] = "hello";

    printf("Original string: %s\n", str);
    reverse_string(str, 0, strlen(str) - 1);
    printf("Reversed string: %s\n", str);

    return 0;
}