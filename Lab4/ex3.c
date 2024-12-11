#include <stdio.h>

long fib_memo(int n, long *memo) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (memo[n] != -1) return memo[n];

    memo[n] = fib_memo(n - 1, memo) + fib_memo(n - 2, memo);
    return memo[n];
}

long fib_recursive_optimized(int n) {
    long memo[n + 1];
    for (int i = 0; i <= n; i++) memo[i] = -1;
    return fib_memo(n, memo);
}