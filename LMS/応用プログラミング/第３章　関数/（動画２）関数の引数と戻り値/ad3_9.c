#include <stdio.h>

// Function with arguments and a return value
int multiply_by_two(int num) {
    return (num * 2); // Returns the doubled value
}

int main(void) {
    int x = 5, result;

    // Call the function and store its return value
    result = multiply_by_two(x);

    printf("Original value: %d\n", x);
    printf("Doubled value: %d\n", result);

    return (0);
}