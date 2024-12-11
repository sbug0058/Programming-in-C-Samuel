#include <stdio.h>
#define LEN 6

int sum(int *p, int num) {
    int tot = 0;
    for (int i = 0; i < num; i++) {
        tot += *(p + i);
    }
    return tot;
}

int main() {
    int nums[LEN] = {3, 6, 9, 12, 15, 18};
    printf("Sum = %d\n", sum(nums, LEN));
    return 0;
}
