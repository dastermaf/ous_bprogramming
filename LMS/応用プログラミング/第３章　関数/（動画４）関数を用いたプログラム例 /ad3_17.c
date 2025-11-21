#include <stdio.h>
// Function to calculate power
int power(int base, int exp) {
    int result = 1;
    int i;
    for (i = 0; i < exp; i++) {
        result *= base;
    }

    return(result);
}
// Function to return the maximum of two numbers
int max(int a, int b) {
    if (a > b) {
        return (a);
    } else {
        return (b);
    }
}

int main(void) {
    int num1 = 2;
    int num2 = 3;
    int num3 = 5;
    int p, m;

    // Calculate power
    p = power(num1, num2);
    printf("power (%d, %d) = %d\n", num1, num2, p);

    // Calculate maximum
    m = max(num1, num3);
    printf("max(%d,%d)%d\n", num1, num3, m);

    return(0);
}