#include <stdio.h>

struct Employee {
    char name[50];
    float salary;
    int hours_worked;
};

void increaseSalary(struct Employee *employee) {
    if (employee->hours_worked >= 12) {
        employee->salary += 150;
    } else if (employee->hours_worked >= 10) {
        employee->salary += 100;
    } else if (employee->hours_worked >= 8) {
        employee->salary += 50;
    }
}

int main() {
    struct Employee employees[5];

    // Input information for each employee
    for (int i = 0; i < 5; ++i) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);

        printf("Salary: ");
        scanf("%f", &employees[i].salary);

        printf("Hours of work per day: ");
        scanf("%d", &employees[i].hours_worked);

        printf("\n");

        // Increase salary based on hours worked
        increaseSalary(&employees[i]);
    }

    // Print information for each employee
    printf("\nFinal Salaries:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee %d - Name: %s, Final Salary: $%.2f\n", i + 1, 
        employees[i].name, employees[i].salary);
    }

    return 0;
}
