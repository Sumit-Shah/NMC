#include <stdio.h>

// Define the inner struct student_info
struct student_info {
    char name[50];
    int age;
    char dob[20];
};

// Define the outer struct Student
struct Student {
    int roll_no;
    int marks;
    struct student_info info; // Nested struct
};

int main() {
    // Declare an array of struct Student to store information for 3 students
    struct Student students[3];

    // Input information for each student
    for (int i = 0; i < 3; ++i) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%d", &students[i].marks);

        printf("Name: ");
        scanf("%s", students[i].info.name);

        printf("Age: ");
        scanf("%d", &students[i].info.age);

        printf("Date of Birth: ");
        scanf("%s", students[i].info.dob);

        printf("\n");
    }

    // Print information for each student
    for (int i = 0; i < 3; ++i) {
        printf("Details for Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].roll_no);
        printf("Marks: %d\n", students[i].marks);
        printf("Name: %s\n", students[i].info.name);
        printf("Age: %d\n", students[i].info.age);
        printf("Date of Birth: %s\n", students[i].info.dob);
        printf("\n");
    }

    return 0;
}
