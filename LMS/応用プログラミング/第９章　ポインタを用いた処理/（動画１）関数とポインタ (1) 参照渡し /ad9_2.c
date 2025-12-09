#include <stdio.h>

void swap(int* x, int* y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b); // 参照を渡す
    printf("After swap: a = %d, b = %d\n", a, b);

    return (0);
}