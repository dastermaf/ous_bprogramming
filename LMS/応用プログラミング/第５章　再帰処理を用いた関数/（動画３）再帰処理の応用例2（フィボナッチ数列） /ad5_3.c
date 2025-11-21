#include <stdio.h>

// Function to calculate Fibonacci number recursively
int fibonacci(int n) {
    // Base cases
    if (n == 0) {
        return (0);
    } else if (n == 1) {
        return (1);
    } else {
        // Recursive step
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
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
