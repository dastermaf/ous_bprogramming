#include <stdio.h>

#define STUDENTS 4 // Number of students (rows)
#define SUBJECTS 3 // Number of subjects (columns)

int main(void) {
    int i, j; // Loop variables

    // Declare three 2D arrays:
    // scores for test 1 (students, subjects)
    int scores1[STUDENTS][SUBJECTS] = {
        {91, 72, 85}, // Scores for student 1 (Subject 1, 2, 3)
        {68, 93, 78}, // Scores for student 2
        {82, 85, 90}, // Scores for student 3
        {75, 80, 88}  // Scores for student 4
    };
    // scores for test 2 (students, subjects)
    int scores2[STUDENTS][SUBJECTS] = {
        {88, 79, 95}, // Scores for student 1 (Subject 1, 2, 3)
        {70, 90, 80}, // Scores for student 2
        {85, 88, 92}, // Scores for student 3
        {79, 83, 90}  // Scores for student 4
    };
    // sum of scores for each student/subject
    int sum[STUDENTS][SUBJECTS]; // Array to store the sum

    printf("--- Test 1 Scores ---\n");
    for (i = 0; i < STUDENTS; i++) {
        for (j = 0; j < SUBJECTS; j++) {
            printf(" %4d", scores1[i][j]); // Print score with padding
        }
        printf("\n"); // New line after each row
    }

    printf("\n--- Test 2 Scores ---\n");
    for (i = 0; i < STUDENTS; i++) {
        for (j = 0; j < SUBJECTS; j++) {
            printf(" %4d", scores2[i][j]); // Print score with padding
        }
        printf("\n"); // New line after each row
    }

    // Calculate the sum of scores for each student and subject
    for (i = 0; i < STUDENTS; i++) {
        for (j = 0; j < SUBJECTS; j++) {
            sum[i][j] = scores1[i][j] + scores2[i][j];
        }
    }

    printf("\n--- Total Scores ---\n");
    for (i = 0; i < STUDENTS; i++) {
        for (j = 0; j < SUBJECTS; j++) {
            printf(" %4d", sum[i][j]); // Print score with padding
        }
        printf("\n"); // New line after each row
    }

    return (0);
}