#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int i, roll;
    srand((unsigned int)time(NULL));

    // Simulate a dice roll (1-6) 5 times and print the results.
    printf("Dice rolls: \n");
    for ( i = 0 ; i < 5; i++) {
        roll = (rand() % 6) + 1; // Generate a number between 1 and 6
        printf("Roll %d: %d\n", (i + 1) , roll);
    }

    return(0);
}