#include <stdio.h>

#define NUMBER 99 // Maximum number of students

int main(void) {
    int i, num, sum = 0;
    int scores[NUMBER];
    double average;

    // Ask for the number of students and validate input using a loop
    do {
        printf("Enter the number of students (max %d): ", NUMBER);
        scanf("%d", &num);
        if (num < 0 || num > NUMBER) { // Check if input is invalid
            printf("Invalid input. Please enter 0 - %d.\n", NUMBER);
        }
    } while (num < 0 || num > NUMBER); // Repeat if num is invalid

    printf("\n");

    return 0;
}