#include <stdio.h>

#define DAYS_IN_WEEK 7
#define TOTAL_INPUTS 10

int main() {
    int days[TOTAL_INPUTS];

    printf("Enter a sequence of %d numbers representing days:\n", TOTAL_INPUTS);
    for (int i = 0; i < TOTAL_INPUTS; i++) {
        printf("Days %d: ", i + 1);
        scanf("%d", &days[i]);
    }

    printf("\nResults:\n");
    for (int i = 0; i < TOTAL_INPUTS; i++) {
        int weeks = days[i] / DAYS_IN_WEEK;
        int remaining_days = days[i] % DAYS_IN_WEEK;
        printf("%d days = %d week(s) and %d day(s)\n", days[i], weeks, remaining_days);
    }

    return 0;
}