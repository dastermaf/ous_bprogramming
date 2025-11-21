#include <stdio.h>
#include <string.h>

// Define a structure for student information
struct student {
    int id;
    char name[20];
    int age;
};

int main(void) {
    // Declare and initialize a Student structure variable
    struct student student1;

    // Assign values to the members
    student1.id = 101;
    strcpy(student1.name, "Alice");
    student1.age = 20;

    // Print the student information
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);

    return (0);
}
