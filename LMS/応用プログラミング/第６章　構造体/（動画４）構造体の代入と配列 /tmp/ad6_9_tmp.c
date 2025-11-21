#include <stdio.h>

// Define a structure for student information
typedef struct student {
    int id;
    char name[50];
    int age;
} Student;

int main(void) {
    // Declare and initialize an array of Student structures
    // ***

    // Access and print information of student 1'
    // ***
    printf("Student 1 Name: %s\n", students[0].name);
    printf("Student 1 Age: %d\n", students[0].age);

    // Access and print information of student 2
    printf("Student 2 ID: %d\n", students[1].id);
    // ***
    printf("Student 2 Age: %d\n", students[1].age);

    // Access and print information of student 3
    printf("Student 3 ID: %d\n", students[2].id);
    printf("Student 3 Name: %s\n", students[2].name);
    // ***
    return (0);
}
