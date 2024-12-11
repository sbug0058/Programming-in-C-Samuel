#include <stdio.h>

#define BASE_RATE_1 0.18
#define BASE_RATE_2 0.20
#define BASE_RATE_3 0.25
#define ICT_REBATE 0.05
#define BRACKET1_STANDARD 10000
#define BRACKET1_GREEN 15000
#define BRACKET2 8000

float calculate_tax(float income, int is_ict, int green_disposal) {
    float tax = 0.0;
    int bracket1 = green_disposal ? BRACKET1_GREEN : BRACKET1_STANDARD;
    if (income <= bracket1) {
        tax += income * BASE_RATE_1;
    } else {
        tax += bracket1 * BASE_RATE_1;
        income -= bracket1;
        if (income <= BRACKET2) {
            tax += income * BASE_RATE_2;
        } else {
            tax += BRACKET2 * BASE_RATE_2;
            income -= BRACKET2;
            tax += income * BASE_RATE_3;
        }
    }

    if (is_ict) {
        tax -= tax * ICT_REBATE;
    }

    return tax;
}

int main() {
    float income;
    int is_ict, green_disposal;

    // Get user input
    printf("Enter your total income: ");
    scanf("%f", &income);

    printf("Are you working in the ICT industry? (1 for Yes, 0 for No): ");
    scanf("%d", &is_ict);

    printf("Do you collect old electronic equipment for green disposal? (1 for Yes, 0 for No): ");
    scanf("%d", &green_disposal);

    // Calculate and display the total tax
    float total_tax = calculate_tax(income, is_ict, green_disposal);
    printf("Your total tax is: €%.2f\n", total_tax);

    return 0;
}