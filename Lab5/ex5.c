#include <stdio.h>
#define SIZE 101

int main() {
    double f[SIZE][SIZE][SIZE];

    for (int x = 0; x < SIZE; x++)
        for (int y = 0; y < SIZE; y++)
            for (int z = 0; z < SIZE; z++)
                f[x][y][z] = x + 6 * y + 7.2 * z;

    printf("f(1, 2, 3) = %.2f\n", f[1][2][3]);
    return 0;
}
