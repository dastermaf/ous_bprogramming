#include <stdio.h>

int main(void) {
    int vx, xy;

    printf("vx: ");
    scanf("%d", &vx);
    printf("vy: ");
    scanf("%d", &xy);

    printf("Sum = %d\n", vx + xy);
    printf("Product = %d\n", vx * xy);

    return (0);
}
