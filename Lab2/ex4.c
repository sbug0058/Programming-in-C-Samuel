#include <stdio.h>
#include <string.h>

#define MAX_ENTRIES 10
#define MAX_LENGTH 11

int main() {
    char name[MAX_LENGTH], surname[MAX_LENGTH];
    int age;
    double salary;
    int counter = 1;
    double yearly_salary;
    int num_entries = 0;
    double total_sum = 0;
    int precision;

    printf("Enter the number of decimal places for salary precision: ");
    scanf("%d", &precision);

    while (num_entries < MAX_ENTRIES) {
        printf("\nEnter employee name: ");
        scanf("%s", name);
        if (strlen(name) > 10) {
            name[10] = '\0';
        }

        printf("Enter employee surname: ");
        scanf("%s", surname);
        if (strlen(surname) > 10) {
            surname[10] = '\0'; 
        }

        printf("Enter employee age: ");
        scanf("%d", &age);

        printf("Enter monthly salary: ");
        scanf("%lf", &salary);

        yearly_salary = salary * 13;

        if ((num_entries + 1) % 5 == 0 || num_entries == MAX_ENTRIES - 1) {
            printf("\n%-5s %-10s %-10s %-5s %-12s %-12s\n", "No.", "Name", "Surname", "Age", "Salary", "Yearly Total");
            printf("--------------------------------------------------------------\n");
            for (int i = num_entries - 4; i <= num_entries; i++) {
                printf("%-5d %-10s %-10s %-5d %.*f %*.2f\n", counter, name, surname, age, precision, salary, 12, yearly_salary);
                counter++;
            }
        }

        total_sum += salary;
        num_entries++;
    }


    double average_salary = total_sum / MAX_ENTRIES;
    printf("\nAverage monthly salary for all entries: %.2f\n", average_salary);

    return 0;
}