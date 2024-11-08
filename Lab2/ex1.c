#include <stdio.h>

int main(void) {
    int input;
    printf("Enter an integer: ");
    scanf("%d", &input);
    char character = (char)input;
    printf("The corresponding character is: %c\n", character);
    return 0;
}