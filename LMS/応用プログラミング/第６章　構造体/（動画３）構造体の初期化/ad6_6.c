#include <stdio.h>

typedef struct point {
    int x;
    int y;
} Point;

int main(void) {
    Point p1 = {10};  // x is 10, y is 0 (partially initialized)
    Point p2;         // x, y are uninitialized

    printf("p1.x: %d, p1.y: %d\n", p1.x, p1.y);
    printf("p2.x: %d, p2.y: %d\n", p2.x, p2.y);

    return (0);
}
