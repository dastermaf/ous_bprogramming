#include <stdio.h>

// Function to calculate Fibonacci number recursively
int fibonacci(int n) {
    // Base cases
    /* BLANK */
    // Recursive step
    /* BLANK */
}

int main(void) {
    int num;

    // Prompt user for input
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check for invalid input
    if (num < 0) {
        printf("Error: Please enter a non-negative integer.\n");
        return (1);  // Indicate error
    }

    // Calculate and print Fibonacci number
    printf("Fibonacci(%d) = %d\n", num, fibonacci(num));

    return (0);
}
