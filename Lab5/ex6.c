#include <stdio.h>
#include <string.h>
#define MAX_STRINGS 10
#define MAX_LENGTH 100

int main() {
    char strings[MAX_STRINGS][MAX_LENGTH];
    char suffix[MAX_LENGTH];
    int n;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%s", strings[i]);

    printf("Enter suffix: ");
    scanf("%s", suffix);

    for (int i = 0; i < n; i++) {
        strcat(strings[i], suffix);
        printf("Updated string %d: %s\n", i + 1, strings[i]);
    }

    return 0;
}
