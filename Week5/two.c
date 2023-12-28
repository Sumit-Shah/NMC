#include <stdio.h>

// Define the structure for employee information
struct Employee {
    char name[50];
    char post[50];
    float salary;
};

// Function to filter employees with salary greater than 10,000
struct Employee filterEmployees(struct Employee *allEmployees, int size, int *filteredSize) {
    struct Employee filteredList[10];  // Assuming maximum size is 10
    int count = 0;

    for (int i = 0; i < size; ++i) {
        if (allEmployees[i].salary > 10000) {
            filteredList[count] = allEmployees[i];
            count++;
        }
    }

    *filteredSize = count;

    // Return the first element of the filtered list (you can modify this based on your needs)
    return filteredList[0];
}

int main() {
    // Declare an array of 10 employees
    struct Employee employees[10];

    // Input information for 10 employees from the user
    printf("Enter information for 10 employees:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Post: ");
        scanf("%s", employees[i].post);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        printf("\n");
    }

    // Call the function to filter employees with salary greater than 10,000
    int filteredSize;
    struct Employee filteredEmployee = filterEmployees(employees, 10, &filteredSize);

    // Display the filtered employee(s)
    printf("\nEmployees with salary greater than 10,000:\n");
    for (int i = 0; i < filteredSize; ++i) {
        printf("Name: %s\n", filteredEmployee.name);
        printf("Post: %s\n", filteredEmployee.post);
        printf("Salary: %.2f\n", filteredEmployee.salary);
        printf("\n");
    }

    return 0;
}
