#include <stdio.h>
#include <math.h>

void transform_to_ceil(double *x) {
    *x = ceil(*x);
}
void transform_to_floor(double *x) {
    *x = floor(*x);
}

int main() {
    double number;
    printf("Enter a number: ");
    scanf("%lf", &number);
    transform_to_ceil(&number);
    printf("Ceiling: %.2f\n", number);
    printf("Enter a number: ");
    scanf("%lf", &number);
    transform_to_floor(&number);
    printf("Floor: %.2f\n", number);
    return 0;
}


void manual_ceil(double *x) {
    int int_part = (int)(*x);
    if (*x > int_part) {
        *x = int_part + 1;
    }
}

void manual_floor(double *x) {
    *x = (int)(*x); 
}




