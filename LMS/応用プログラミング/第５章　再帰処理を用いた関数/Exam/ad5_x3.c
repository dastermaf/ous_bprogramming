#include <stdio.h>

// Function to calculate power recursively
int power (int base, int exp) {
    // Base-case: exp is 0, result is 1
    if (exp == 0) {
        return (1);
    }
    // Recursive step: base power (base, exp 1)
    else {
        return (base * power (base, exp - 1));
    }
}

int main(void) {
    int base, exp;

    // Prompt user for input
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);

    // Calculate and print result
    printf("%d^%d = %d\n", base, exp, power (base, exp));

    return(0);
}