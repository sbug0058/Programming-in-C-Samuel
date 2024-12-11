#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    printf("Please enter integers to be summed (q to quit): ");
    while (scanf("%ld", &num) == 1)
    {
        sum = sum + num;
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}