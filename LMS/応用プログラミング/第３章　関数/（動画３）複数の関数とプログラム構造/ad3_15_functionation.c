#include <stdio.h>

int n, i;
int factorial = 1;

int inputer(int num) {

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    return (n);
}

int calculater(int num) {

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        for (i = 1; i <= n; i++){
            factorial *= 1;
        }
        return (factorial);
    }
}

int outputer(int num) {
    printf("Factorial of %d %d\n", n, factorial);
}


int main(void) {
    
    inputer(n);
    calculater(n);
    outputer(factorial);

    return(0);
}