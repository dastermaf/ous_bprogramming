#include <stdio.h>

#define NUMBER 5 // Number of elements in the array

int main(void) {
    int i;
    int numbers[NUMBER] = {5, 2, 8, 3, 6};
    int even_sum = 0; // Variable to store sum of even numbers
    int odd_sum = 0; // Variable to store sum of odd numbers

    // Loop through all elements
    for (i = 0; i < NUMBER; i++) {
        // Check if the current number is even
        if (numbers[i] % 2 == 0) {
            even_sum += numbers[i]; // Add to even_sum if even
        } else {
            odd_sum += numbers[i]; // Add to odd_sum if odd
        }
    }

    // Print the results
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return (0);
}