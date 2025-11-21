#include <stdio.h>

void func(int a, int b) {
    a += 1;
    b *= 2;
    printf("func: a=%d, b = %d\n", a, b);
}

int main(void) {
    int x = - 10, y = - 20;
    func(x, y);
    printf("main: x=%d, y= %d\n", x, y);
    return(0);
}