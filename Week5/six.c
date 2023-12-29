#include <stdio.h>
#include <stdlib.h>

// Define the structure for employee information
struct Employee {
    char name[50];
    float salary;
    int hours_worked;
};

// Function to print information of the employee with the highest salary
void printHighestSalary(struct Employee *employees, int n) {
    

    // Initialize variables to track the highest salary and its index
    float maxSalary = employees[0].salary;
    int maxIndex = 0;

    // Iterate through the array to find the employee with the highest salary
    for (int i = 1; i < n; ++i) {
        if (employees[i].salary > maxSalary) {
            maxSalary = employees[i].salary;
            maxIndex = i;
        }
    }

    // Print information for the employee with the highest salary
    printf("Employee with the highest salary:\n");
    printf("Name: %s\n", employees[maxIndex].name);
    printf("Salary: $%.2f\n", employees[maxIndex].salary);
    printf("Hours of work per day: %d\n", employees[maxIndex].hours_worked);
}

int main() {
    int n;

    // Get the number of employees from the user
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Dynamically allocate an array of structures to store employee information
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
