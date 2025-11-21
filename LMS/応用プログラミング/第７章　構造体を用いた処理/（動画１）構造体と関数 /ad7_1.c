#include <stdio.h>
#include <string.h>

// Define a structure for student information.
typedef struct student {
    int id;
    char name[50];
} Student;

// Function to print student information.
// This function receives a Student structure by value.
void p_info(Student source) {
    printf("ID: %d, Name: %s\n", source.id, source.name);
    // Attempt to modify the student's ID within the function.
    source.id = 999;
}

int main(void) {
    // Declare and initialize a Student structure.
    Student student1;
    student1.id = 1;
    strcpy(student1.name, "Alice");

    printf("Before function call:\n");
    p_info(student1); // Pass the structure by value.

    printf("After function call:\n");
    // Print the original student1 to show that its ID was not changed.
    printf("ID: %d, Name: %s\n", student1.id, student1.name);

    return (0);
}
