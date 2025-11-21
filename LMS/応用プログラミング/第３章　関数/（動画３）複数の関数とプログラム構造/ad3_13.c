#include <stdio.h>

int main(void) {
    int num1, num2;
    int sum;

    // Input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Calculation
    sum = num1 + num2;

    // Output
    printf("Sum: %d\n", sum);

    return(0);
}