// 1. Create a structure named student that has a name, 
// roll number and marks as members. 
// Assume appropriate types and size of members. 
// Use this structure toread and display records of 10 students. 
// Create two functions: One is to read
// information of students and other to display the information.


// #include<stdio.h>
// struct student{
//     char name[30];
//     int  roll;
//     float marks;
// };

// void main(){
//     struct book b1;
//     {
//         printf("Enter book title : ");
//         gets(b1.name);
//         pri
//         };
    
// }





#include <stdio.h>

// Define the structure
struct student {
    char name[50];
    int roll_number;
    float marks;
};

// Function to read information of students
void readStudentInfo(struct student *s) {
    printf("Enter student details:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll_number);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
        printf("\n");
    }
}

// Function to display information of students
void displayStudentInfo(const struct student *s) {
    printf("\nStudent Information:\n");
    for (int i = 0; i < 10; ++i) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_number);
        printf("Marks: %.2f\n", s[i].marks);
        printf("\n");
    }
}

int main() {
    // Declare an array of 10 students
    struct student students[10];

    // Read information of students
    readStudentInfo(students);

    // Display information of students
    displayStudentInfo(students);

    return 0;
}
