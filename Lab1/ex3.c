#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main(void)
{
    int x = 10, y = 5;

    int sum = add(x, y);
    printf("The sum of %d and %d is: %d\n", x, y, sum);

    int difference = subtract(x, y);
    printf("The difference between %d and %d is: %d\n", x, y, difference);

    int product = multiply(x, y);
    printf("The product of %d and %d is: %d\n", x, y, product);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}