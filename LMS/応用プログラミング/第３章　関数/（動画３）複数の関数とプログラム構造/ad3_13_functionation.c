#include <stdio.h>

int num1, num2;

int inputer(void) {

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    return (num1, num2);
}

int calculator(int num1, int num2) {

    int sum;
    sum = num1 + num2;
    return (sum);

}

int outputer(int sum) {
    printf("Sum: %d\n", sum);
}

int main(void) {

    int sum;
    inputer();
    sum = calculator(num1, num2);
    outputer(sum);

    return(0);
}