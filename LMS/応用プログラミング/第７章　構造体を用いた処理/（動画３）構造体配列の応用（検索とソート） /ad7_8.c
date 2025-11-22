#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 3

// Define a structure for student
typedef struct student {
    int id;
    char name[50];
    int score;
} Student;

// Function to print student information
void print_student(Student s) {
    printf("ID: %d, Name: %s, Score: %d\n", s.id, s.name, s.score);
}

// Function to print all students
void print_all_students(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        print_student(students[i]);
    }
}

// Function to sort students by score using bubble sort
void sort_students_by_score(Student arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j].score > arr[j + 1].score) {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    // Declare and initialize an array of students
    Student students[] = {
        {1001, "Alice", 90},
        {1002, "Bob", 85},
        {1003, "Charlie", 70}
    };

    printf("Before sorting:\n");
    print_all_students(students, NUM_STUDENTS);

    sort_students_by_score(students, NUM_STUDENTS);

    printf("After sorting by ID:\n");
    print_all_students(students, NUM_STUDENTS);

    return (0);
}