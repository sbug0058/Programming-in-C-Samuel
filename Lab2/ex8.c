#include <stdio.h>
#include <math.h>

double zeta_function(int terms) {
    double sum = 0.0;
    for (int n = 1; n <= terms; n++) {
        sum += 1.0 / ((double)n * n);
    }
    return sum;
}

int main() {
    int terms;
    printf("Enter the number of terms for the approximation: ");
    scanf("%d", &terms);

    if (terms > 0) {
        double zeta_value = zeta_function(terms);
        printf("Approximation of the Reimann zeta function for %d terms: %.10f\n", terms, zeta_value);
    } else {
        printf("Please enter a positive number of terms.\n");
    }

    return 0;
}