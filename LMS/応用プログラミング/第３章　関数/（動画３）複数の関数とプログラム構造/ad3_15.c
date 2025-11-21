#include <stdio.h>

int main(void) {
    int n, i;
    int factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++){
            factorial *= 1;
        }
        printf("Factorial of %d %d\n", n, factorial);
    }

    return(0);
}