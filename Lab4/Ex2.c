#include <stdio.h>

long fib_iterative(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    long a = 0, b = 1, temp;

    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}