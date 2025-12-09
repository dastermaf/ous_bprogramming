#include <stdio.h>

void swap(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
    printf("In swap: a = %d, b = %d\n", x, y);
}

int main(void) {
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(a, b); // 値渡し
    printf("After swap: a = %d, b = %d\n", a, b);

    return (0);
}