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
void add_student(Student students[], int index, int id, char name[], int jp, int mt, int en) {
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

// Function to swap two student structures
void swap_students(Student s[], int i, int j) {
    Student temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

// Function to sort students by average score (descending)
void sort_by_average(Student students[], int count) {
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (students[j].average < students[j + 1].average) {
                swap_students(students, (j), (j + 1));
            }
        }
    }
}

int main(void) {
    Student students[2];  // Array to hold student data

    // Add student data
    add_student(students, 0, 101, "Alice", 80, 75, 90);
    add_student(students, 1, 102, "Bob", 90, 85, 80);

    printf("Before sorting:\n");
    display_student(students[0]);
    display_student(students[1]);

    // Sort students by average score
    sort_by_average(students, 2);

    printf("After sorting by average:\n");
    display_student(students[0]);
    display_student(students[1]);

    return (0);
}