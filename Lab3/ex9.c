#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MIN_RANGE -100.0
#define MAX_RANGE 100.0
#define OUTPUT_FILENAME "output.txt"

int is_valid_number(const char *str, double *num) {
    char *endptr;
    *num = strtod(str, &endptr);
    return (*endptr == '\0' || isspace(*endptr));
}

int main() {
    FILE *output_file = fopen(OUTPUT_FILENAME, "w");
    if (output_file == NULL) {
        fprintf(stderr, "Error: Could not open output file.\n");
        return 1;
    }

    char input[100];
    double number;

    printf("Enter real numbers (Ctrl+D to end input):\n");

    while (scanf("%s", input) != EOF) {
        if (is_valid_number(input, &number)) {
            if (number >= MIN_RANGE && number <= MAX_RANGE) {
                fprintf(output_file, "%f\n", number);
            } else {
                printf("Warning: Number %f is out of the allowed range (%.2f to %.2f).\n", number, MIN_RANGE, MAX_RANGE);
            }
        } else {
            printf("Warning: '%s' is not a valid real number.\n", input);
        }
    }

    fclose(output_file);
    printf("Processing complete. Valid numbers have been written to '%s'.\n", OUTPUT_FILENAME);

    return 0;
}
