#include <stdio.h>
#include <stdlib.h> // Required for rand, srand functions
#include <time.h> // Required for time function

int main(void) {
    int random_num, random_1_to_100;

    // Initialize the random number generator
    srand((unsigned int)time(NULL));

    // Generate a random number between 0 and RAND_MAX
    random_num = rand();
    printf("Random number: %d\n", random_num);

    // Generate a random number between 1 and 100
    random_1_to_100 = (rand()%100)+1;
    printf("Random number (1-100): %d\n", random_1_to_100);

    return(0);
}