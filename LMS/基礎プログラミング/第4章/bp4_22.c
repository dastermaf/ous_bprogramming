#include <stdio.h>

int main(void) {
    int vx, vy;

    printf("Enter two integers (vx vy): ");
    scanf("%d %d", &vx, &vy);
    printf("Mean = %f\n", (double)(vx + vy) / 2.0);

    return(0);
}