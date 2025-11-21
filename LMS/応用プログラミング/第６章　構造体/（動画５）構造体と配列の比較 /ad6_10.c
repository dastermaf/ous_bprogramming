#include <stdio.h>

// Define a structure for student information
typedef struct student {
    char name[20];
    int id;
    double score;
} Student;

int main(void) {
    // Declare and initialize a structure variable
    Student s1 = {"Alice", 1001, 85.5};

    // Declare and initialize an array of integers
    int scores[3] = {90, 75, 88};

    // Accessing structure members
    printf("Student Name: %s\n", s1.name);
    printf("Student ID: %d\n", s1.id);
    printf("Student Score: %.1f\n", s1.score);

    // Accessing array elements
    printf("Scores: %d, %d, %d\n", scores[0], scores[1], scores[2]);

    return (0);
}
