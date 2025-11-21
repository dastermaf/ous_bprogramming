#include <stdio.h>

int main(void) {
    double num1 = 22.1, num2 = 7.5;

    printf("num1: %f\nnum2: %f\n", num1, num2);
    printf("num1 + num1 = %f\n", num1 + num2);
    printf("num1 - num1 = %f\n", num1 - num2);
    printf("num1 * num1 = %f\n", num1 * num2);
    printf("num1 / num1 = %f\n", num1 / num2);
    printf("num1 = %f\n", +num2);
    printf("num1 = %f\n", -num2);
    // パーセント演算子は使用不可
    return(0);
}