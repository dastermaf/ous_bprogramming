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

// Function to search for a student by ID, returns index or -1 if not
// found
int search_student_by_id(Student students[], int size, int search_id) {
    /* BLANK */
}

int main(void) {
    // Declare and initialize an array of students
    Student students[] = {
        {1001, "Alice", 90}, {1002, "Bob", 85}, {1003, "Charlie", 70}};

    int search_id;
    printf("Enter student ID to search: ");
    scanf("%d", &search_id);

    int found_index =
        search_student_by_id(students, NUM_STUDENTS, search_id);
    if (found_index != -1) {
        printf("Student found: ");
        print_student(students[found_index]);
    } else {
        printf("Student with ID %d not found.\n", search_id);
    }

    return (0);
}
