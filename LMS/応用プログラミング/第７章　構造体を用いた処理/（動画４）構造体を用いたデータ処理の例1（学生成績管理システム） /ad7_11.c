#include <stdio.h>
#include <string.h>

// Define a structure for student information
typedef struct student {
    int id;          // Student ID
    char name[50];   // Name
    int japanese;    // Japanese score
    int math;        // Math score
    int english;     // English score
    double average;  // Average score
} Student;

// Function to add student data
void add_student(Student students[], int index, int id, char name[],
                 int jp, int mt, int en) {
    students[index].id = id;
    strcpy(students[index].name, name);
    students[index].japanese = jp;
    students[index].math = mt;
    students[index].english = en;
    students[index].average = (double)(jp + mt + en) / 3.0;
}

// Function to display student data
void display_student(Student s) {
    printf(
        "ID: %d, Name: %s, Japanese: %d, Math: %d, English: %d, "
        "Average: %.2f\n",
        s.id, s.name, s.japanese, s.math, s.english, s.average);
}

// Function to search for a student by ID
int search_student(Student students[], int count, int search_id) {
    int i;
    for (i = 0; i < count; i++) {
        if (students[i].id == search_id) {
            return i;  // Return index if found
        }
    }
    return -1;  // Student not found
}

int main(void) {
    Student students[2];  // Array to hold student data
    int search_id, found_index;

    // Add student data
    add_student(students, 0, 101, "Alice", 80, 75, 90);
    add_student(students, 1, 102, "Bob", 70, 85, 80);

    printf("Enter student ID to search: ");
    scanf("%d", &search_id);

    found_index = search_student(students, 2, search_id);
    if (found_index != -1) {
        printf("Student found.\n");
        display_student(students[found_index]);
    } else {
        printf("Student with ID %d not found.\n", search_id);
    }

    return (0);
}
