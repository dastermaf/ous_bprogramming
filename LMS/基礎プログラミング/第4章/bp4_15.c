#include <stdio.h>

int main(void) {
    int vx;
    double dx;

    printf("Enter two integers (vx): ");
    scanf("%d", &vx);
    printf("Enter two integers (dx): ");
    scanf("%lf", &dx);

    printf("vx: %d\n", vx);
    printf("dx: %f\n", dx);

    return (0);
}
