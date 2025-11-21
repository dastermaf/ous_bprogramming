// 構造体配列

#include <stdio.h>

// Define a structure for student information
typedef struct student {
    int id;
    char name[50];
    int age;
} Student;

int main(void) {
    // Declare and initialize an array of Student structures
    Student students[2] = {{1, "Alice", 20}, {2, "Bob", 21}};

    // Print information of student 1
    printf("Student 1 ID: %d\n", students[0].id);
    printf("Student 1 Name: %s\n", students[0].name);
    printf("Student 1 Age: %d\n", students[0].age);

    // Print information of student 2
    printf("Student 2 ID: %d\n", students[1].id);
    printf("Student 2 Name: %s\n", students[1].name);
    printf("Student 2 Age: %d\n", students[1].age);

    return (0);
}
