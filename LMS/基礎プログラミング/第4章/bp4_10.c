#include <stdio.h>

int main(void) {
    int vx, vy;

    printf("Enter two integers (vx, vy): "); // 「,」区切る必要があります。
    scanf("%d, %d", &vx, &vy);

    printf("vx / vy = %d\n", vx / vy);
    printf("vx %% vy = %d\n", vx % vy);

    return 0;
}
