#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter a non-negative integer to compute its factorial: ");
    scanf("%d", &n);

    if (n >= 0) {
        unsigned long long fact = factorial(n);
        printf("%d! = %llu\n", n, fact);
    }

    return 0;
}