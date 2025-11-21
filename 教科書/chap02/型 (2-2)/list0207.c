#include <stdio.h>

int main(void) {
    double x, y;

    puts("二つの整数を入力してください。");
    printf("整数x："); scanf("%lf", &x);
    printf("整数y："); scanf("%lf", &y);

    printf("x + x = %f\n", x + y); // 和
    printf("x - x = %f\n", x - y); // 差
    printf("x * x = %f\n", x * y); // 積
    printf("x / x = %f\n", x / y); // 商

    return 0;
}