#include <stdio.h>

void cpArr(int *src, int *dst, int sz) {
    int idx = 0;
    while (idx < sz) {
        dst[idx] = src[idx];
        idx++;
    }
}

int main() {
    int src[] = {2, 4, 6, 8};
    int dst[4];
    int n = sizeof(src) / sizeof(src[0]);

    cpArr(src, dst, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", dst[i]);
    }
    return 0;
}
