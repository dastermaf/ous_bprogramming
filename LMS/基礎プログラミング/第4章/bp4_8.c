#include <stdio.h>

int main(void) {
    int vx, xy, sum, product;

    printf("vx: ");
    scanf("%d", &vx);
    printf("vy: ");
    scanf("%d", &xy);

    sum = vx + xy;
    product = vx * xy;

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return (0);
}
