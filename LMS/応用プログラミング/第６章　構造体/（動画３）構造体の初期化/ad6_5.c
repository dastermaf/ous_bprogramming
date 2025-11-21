#include <stdio.h>
#include <string.h> // For strcpy

typedef struct student {
    int id;
    char name[20];
    int age;
} Student;

int main(void) {
    // Member wise initialization
    Student student1; // Declare a struct variable
    student1.id = 1; // Assign values to members
    strcpy(student1.name, "Alice");
    student1.age = 20;
    printf("Fatch init: ID: %d, Name: %s, Age: %d\n", student1.id, student1.name, student1.age);

    // Batch initialization
    Student student2 = {2, "Bob", 21}; // Declare and initialize at once
    printf("Batch init: ID: %d, Name: %s, Age: %d\n", student2.id, student2.name, student2.age);

    // Designation initializers
    Student student3 = {
        .id = 3,
        .age = 22,
        .name = "Charlie"}; // Initialiaze with designated initializers
    printf("Designated init: ID: %d, Name: %s, Age: %d\n", student3.id, student3.name, student3.age);

    return 0;
}