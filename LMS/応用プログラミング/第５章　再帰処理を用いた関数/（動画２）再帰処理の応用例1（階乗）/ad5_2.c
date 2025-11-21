#include <stdio.h>

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0 || n == 1) {
        return (1); // Base case: factorial of 0 or 1 is 1
    } else {
        return (n * factorial(n - 1)); // Recursive step
    }
}

int main(void) {
    int num;

    // Prompt user for input
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Calculate and print factorial
    printf("Factorial of %d, is: %d\n", num, factorial(num));

    return(0);
}