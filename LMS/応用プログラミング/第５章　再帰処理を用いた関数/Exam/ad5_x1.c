#include <stdio.h>

// Function to compute GCD using Euclidean algorithm
int gcd(int n1, int n2) {
    if (n2 == 0) {
        return n1;
    }
    return gcd(n2, n1 % n2);
}

int main(void) {
    int num1, num2;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));
    return(0);
}