#include <stdio.h>
#include <string.h>

// Define a structure for student information
typedef struct student {
    char name [50];
    int id;
    int grade;
} Student;

int main(void) {
    // Declare a student variable
    Student student1;

    // Assign values to members
    strcpy(student1.name, "Alice"); // strcpy(destonation, source)
    student1.id = 12345;
    student1.grade = 3;

    // Print the values of members
    printf("Student Name: %s\n", student1.name);
    printf("Student ID: %d\n", student1.id);
    printf("Student Grade: %d\n", student1.grade);
    return(0);
}