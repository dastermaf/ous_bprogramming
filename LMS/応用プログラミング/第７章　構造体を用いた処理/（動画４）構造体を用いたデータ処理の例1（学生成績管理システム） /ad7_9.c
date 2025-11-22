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
Student add_student(Student students[], int index, int id, char name[], int jp, int mt, int en) {
    students[index].id = id;
    strcpy(students[index].name, name);
    students[index].japanese = jp;
    students[index].math = mt;
    students[index].english = en;
    students[index].average = (double)(jp + mt + en) / 3.0;

    return(students[index]);
}

// Function to display student data
void display_student(Student s) {
    printf(
        "ID: %d, Name: %s, Japanese: %d, Math: %d, English: %d, "
        "Average: %.2f\n",
        s.id, s.name, s.japanese, s.math, s.english, s.average);
}

int main(void) {
    Student students[2];  // Array to hold student data

    // Add student data
    add_student(students, 0, 101, "Alice", 80, 75, 90);
    add_student(students, 1, 102, "Bob", 90, 85, 80);

    // Display student data
    display_student(students[0]);
    display_student(students[1]);

    return (0);
}