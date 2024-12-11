#include <stdio.h>

#define MAX_SIZE 20

float calculate_mean(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

float calculate_median(int arr[], int n) {
    if (n % 2 == 0) {
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        return arr[n / 2];
    }
}

int calculate_mode(int arr[], int n) {
    int max_count = 0;
    int mode = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_count = count;
            mode = arr[i];
        }
    }
    return mode;
}

int main() {
    int numbers[MAX_SIZE];
    int n;
    printf("Enter the number of elements (up to 20): ");
    scanf("%d", &n);

    if (n < 1 || n > MAX_SIZE) {
        printf("Invalid input. Please enter a number between 1 and 20.\n");
        return 1;
    }

    printf("Enter %d numbers in ascending order (1 to 100):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        if (numbers[i] < 1 || numbers[i] > 100) {
            printf("Invalid input. Number out of range.\n");
            return 1;
        }
    }
    float mean = calculate_mean(numbers, n);
    float median = calculate_median(numbers, n);
    int mode = calculate_mode(numbers, n);
    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    printf("Mode: %d\n", mode);

    return 0;
}
