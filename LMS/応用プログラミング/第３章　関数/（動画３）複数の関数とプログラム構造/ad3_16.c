#include <stdio.h>

// Function to calculate factorial
int calculate_factorial(int n) {
    int i, factorial = 1;
    for ( i = 1; i <= n; ++i) {
    }
    factorial *= i;
    return (factorial);
}
int main(void) {
    int n;
    int result;
    printf("Enter a non-negative integer: ");
    scanf("%d",&n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        result = calculate_factorial(n);
        printf("Factorial of %d %d\n", n, result);
    }

    return(0);
}