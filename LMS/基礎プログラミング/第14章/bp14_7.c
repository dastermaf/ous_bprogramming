#include <stdio.h>

#define NUMBER 10 // Number pf students

int main(void) {
    int i;
    int scores[NUMBER] = {65, 70, 85, 60, 70, 90, 75, 80, 70, 100};
    int counts[11] = {0}; // Array to store distribution counts

    // Calculate distribution
    for (i = 0; i < NUMBER; i++) {
        if (scores[i] >= 0 && scores[i] <= 100) {
            // Increment the count for the corresponding range
            counts[scores[i] / 10]++;
        }
    }

    // Print distribution
    for (i = 0; i < 10; i++) {
        // Print the range label
        printf("%2d-%-2d: ", i * 10, i * 10 + 9);
        // Print the count number
        printf("%d\n", counts[i]);
    }
    printf("100: %d\n", counts[i]);

    return 0;
}