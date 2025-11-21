#include <stdio.h>

// Function to calculate factorial recursively with trace
int factorial(int n) {
    int result;
    printf("Calling factorial(%d)\n", n);

    if (n == 0 || n == 1) {
        printf("Returning 1 from factorial(%d)\n", n);
        return (1); // Base case: factorial of 0 or 1 is-1
    } else {
        int result  = n * factorial(n-1); // Recursive step
        printf("Returning %d from factorial(%d)\n", result, n);
        return (result);
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