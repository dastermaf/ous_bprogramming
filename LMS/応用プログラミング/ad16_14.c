#include <stdio.h>

void update(int a, int* b) {
    a += 10;
    *b += 10;

    printf("a: %d, b: %d\n", a, *b);
}

int main(void) {
    int x = 10;
    int y = 20;

    update(x, &y);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", x + y);

    return(0);
}