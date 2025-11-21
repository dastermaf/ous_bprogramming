#include <stdio.h>

// Function to calculate Fibonacci number iteratively
int fibonacci_iterative(int n) {
    int i, next, a = 0, b = 1;
    if (n <= 1) {
        return (n);
    }
    for (i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return (b);
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
    printf("Fibonacci(%d) = %d\n", num, fibonacci_iterative(num));

    return (0);
}
