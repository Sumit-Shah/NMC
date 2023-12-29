#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    float salary;
    int hours_worked;
};

void printHighestSalary(struct Employee *employees, int n) {
    if (n <= 0) {
        printf("Invalid number of employees.\n");
        return;
    }

    float maxSalary = employees[0].salary;
    int maxIndex = 0;

    for (int i = 1; i < n; ++i) {
        if (employees[i].salary > maxSalary) {
            maxSalary = employees[i].salary;
            maxIndex = i;
        }
    }

    printf("Employee with the highest salary:\n");
    printf("Name: %s\n", employees[maxIndex].name);
    printf("Salary: $%.2f\n", employees[maxIndex].salary);
    printf("Hours of work per day: %d\n", employees[maxIndex].hours_worked);
}

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Dynamically allocate an array of structures
    struct Employee *employees = (struct Employee *)malloc(n * sizeof(struct Employee));

    // Input information for each employee
    for (int i = 0; i < n; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hours_worked);

        printf("\n");
    }

    // Print information for the employee with the highest salary
    printHighestSalary(employees, n);

    // Free dynamically allocated memory
    free(employees);

    return 0;
}
