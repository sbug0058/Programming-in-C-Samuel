#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_EMPLOYEES 100

typedef struct {
    char name[50];
    char surname[50];
    int id;
    double salary;
} Employee;

int compare_by_id(const void *a, const void *b) {
    return ((Employee *)a)->id - ((Employee *)b)->id;
}

int compare_by_surname(const void *a, const void *b) {
    return strcmp(((Employee *)a)->surname, ((Employee *)b)->surname);
}

int main() {
    Employee employees[MAX_EMPLOYEES];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter details for employee %d (name surname id salary): ", i + 1);
        scanf("%s %s %d %lf", employees[i].name, employees[i].surname, &employees[i].id, &employees[i].salary);
    }

    printf("\nEmployee list sorted by ID:\n");
    qsort(employees, n, sizeof(Employee), compare_by_id);
    for (int i = 0; i < n; i++)
        printf("%d: %s %s, Salary: %.2f\n", employees[i].id, employees[i].name, employees[i].surname, employees[i].salary);

    printf("\nEmployee list sorted by Surname:\n");
    qsort(employees, n, sizeof(Employee), compare_by_surname);
    for (int i = 0; i < n; i++)
        printf("%s %s, ID: %d, Salary: %.2f\n", employees[i].surname, employees[i].name, employees[i].id, employees[i].salary);

    return 0;
}
