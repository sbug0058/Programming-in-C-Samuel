#include <stdio.h>
#include <string.h>
#include <ctype.h>

int analyze_string(char *str, int *len, char *first_char, char *freq_char) {
    int counts[256] = {0};
    int i = 0;
    *len = 0;

    while (str[i] != '\0') {
        if (isdigit(str[i])) {
            return 0; 
        }
        counts[(unsigned char)str[i]]++;
        i++;
    }

    *len = i; 
    *first_char = str[0];

    int max_count = 0;
    for (i = 0; i < 256; i++) {
        if (counts[i] > max_count) {
            max_count = counts[i];
            *freq_char = (char)i;
        }
    }
    return 1; 
}

int main() {
    char input[100];
    int length;
    char first, most_frequent;

    printf("Enter strings (type 'exit' to quit):\n");
    while (scanf("%s", input) && strcmp(input, "exit") != 0) {
        if (analyze_string(input, &length, &first, &most_frequent)) {
            printf("Input is valid.\n");
            printf("Length: %d\n", length);
            printf("First character: %c\n", first);
            printf("Most frequent character: %c\n", most_frequent);
        } else {
            printf("Input invalid (contains numeric characters).\n");
        }
    }
    return 0;
}
