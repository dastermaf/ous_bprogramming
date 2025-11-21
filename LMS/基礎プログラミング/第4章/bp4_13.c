#include <stdio.h>

int main(void) {
    double dx, dy;

    printf("Enter two integers (dx, dy): ");
    scanf("%lf, %lf", &dx, &dy);

    printf("dx: %f\ndy: %f\n", dx, dy);
    printf("dx / dy = %f\n", dx / dy);

    return 0;
}
