#include <stdio.h>
#include <string.h>

// Define a structure for student information.
typedef struct student {
    int id;
    char name[50];
} Student;

// Function to create and return a student structure.
Student create_student(int id, char name[]) {
    Student s;
    s.id = id;
    strcpy(s.name, name);
    return (s);
}

int main(void) {
    // Call the function to create a student structure.
    Student new_student = create_student(32, "Alice");

    // Print the information of the returned student structure.
    printf("ID: %d, Name: %s\n", new_student.id, new_student.name);

    return (0);
}
