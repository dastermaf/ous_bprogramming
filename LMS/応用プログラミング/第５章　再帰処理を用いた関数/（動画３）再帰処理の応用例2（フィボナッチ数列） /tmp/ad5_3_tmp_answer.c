#include <stdio.h>

// Function to calculate Fibonacci number recursively
int fibonacci(int n) {
    int result;
    // Base cases
    if (n == 0 || n == 1) {
        printf("Fibonacci(%d) = 1\n", n);
        return (1);
    } else {
        // Recursive step
        result = fibonacci(n-1) + fibonacci(n-2);
        printf("Fibonacci(%d) = %d\n", n, result);
        return (result);
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
