#include <stdio.h>

#define EXCHANGE_RATE 0.94
#define TOTAL_CONVERSIONS 10

int main() {
    double dollars[TOTAL_CONVERSIONS];
    double euros[TOTAL_CONVERSIONS];

    printf("Enter %d dollar amounts to convert to euros:\n", TOTAL_CONVERSIONS);
    for (int i = 0; i < TOTAL_CONVERSIONS; i++) {
        printf("Dollars %d: ", i + 1);
        scanf("%lf", &dollars[i]);
        euros[i] = dollars[i] * EXCHANGE_RATE;
    }

    printf("\nConversion Results:\n");
    for (int i = 0; i < TOTAL_CONVERSIONS; i++) {
        printf("$%.2f = \u20AC%.2f\n", dollars[i], euros[i]);
    }

    return 0;
}