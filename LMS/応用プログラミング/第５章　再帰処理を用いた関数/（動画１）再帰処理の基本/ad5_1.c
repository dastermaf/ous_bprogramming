#include <stdio.h>

// Function to calculate the sum of numbers from 1 to n recursively
int sum_recursive (int n) {
    // Base case: if n is 1, return 1
    if (n == 1) {
        return (1);
    }
    // Recursive step: add n to the sum of numbers from 1-to-n-1
    return(n + sum_recursive (n - 1));
}

int main(void) {
    int n = 5; // Example value for in
    int sum;

    // Calculate the sum using the recursive function
    sum = sum_recursive(n);
    // Print the result
    printf("Sum up to %d: %d\n", n, sum);

    return(0);
}