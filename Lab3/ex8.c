#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

int has_uppercase_beyond_first(const char *word) {
    for (int i = 1; word[i] != '\0'; i++) {
        if (isupper(word[i])) {
            return 1;
        }
    }
    return 0;
}

int starts_with_non_alpha(const char *word) {
    return !isalpha(word[0]);
}

int has_punctuation_preceded_by_space(const char *text) {
    for (int i = 1; text[i] != '\0'; i++) {
        if (ispunct(text[i]) && text[i - 1] == ' ') {
            return 1;
        }
    }
    return 0;
}

int has_repeated_spaces(const char *text) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ' && text[i + 1] == ' ') {
            return 1;
        }
    }
    return 0;
}

int main() {
    char word[MAX_WORD_LENGTH];
    int error_count = 0;

    printf("Enter text input (Ctrl+D to end input):\n");

    while (scanf("%s", word) != EOF) {
        int length = strlen(word);

        if (length > 10 && strchr(word, '-') == NULL) {
            printf("Warning: '%s' is longer than 10 characters and lacks a hyphen.\n", word);
            error_count++;
        }

        if (has_uppercase_beyond_first(word)) {
            printf("Warning: '%s' contains uppercase characters beyond the first letter.\n", word);
            error_count++;
        }

        if (starts_with_non_alpha(word)) {
            printf("Warning: '%s' starts with a non-alphabetic character.\n", word);
            error_count++;
        }

        if (has_punctuation_preceded_by_space(word)) {
            printf("Warning: '%s' contains punctuation preceded by a space.\n", word);
            error_count++;
        }

        if (has_repeated_spaces(word)) {
            printf("Warning: '%s' contains repeated spaces.\n", word);
            error_count++;
        }
    }

    if (error_count == 0) {
        printf("No errors found.\n");
    } else if (error_count == 1) {
        printf("1 error found.\n");
    } else {
        printf("%d errors found.\n", error_count);
    }

    return 0;
}
