#include <stdio.h>

#define NUMBER 5 // Define the number of students

int main(void) {
    int scores[NUMBER];
    int i;
    int max, min; // Variables to store max and min scores

    for (i = 0; i < NUMBER; i++) {
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Initialize max and min with the first element
    max = min = scores[0];

    return 0;
}