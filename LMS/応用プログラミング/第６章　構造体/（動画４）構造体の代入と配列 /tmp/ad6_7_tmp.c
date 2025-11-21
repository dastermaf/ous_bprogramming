#include <stdio.h>

// Define a structure for student information
typedef struct student {
    int id;
    char name[50];
    int age;
} Student;

int main(void) {
    // Declare and initialize student1
    Student student1 = {1, "Alice", 20};

    // Declare student2
// ***
    // Assign student1 to student2
    student2 = student1;

    // Print information of student1
    printf("Student 1 ID: %d\n", student1.id);
    printf("Student 1 Name: %s\n", student1.name);
    printf("Student 1 Age: %d\n", student1.age);

    // Print information of student2
    printf("Student 2 ID: %d\n", student2.id);
    printf("Student 2 Name: %s\n", student2.name);
    printf("Student 2 Age: %d\n", student2.age);

    return (0);
}
