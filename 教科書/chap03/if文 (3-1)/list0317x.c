#include <stdio.h>

int main(void) {
    int n1, n2, max, min;

    puts("二つの整数を入力せよ。");
    printf("整数1： "); scanf("%d", &n1);
    printf("整数2： "); scanf("%d", &n2);

    if (n1 > n2) {
        max = n1;
        min = 2;
    } else {
        max = n2;
    } // ここは不能！！ 

    printf("大きい方の値は%dです。\n", max);
    printf("小さい方の値は%dです。\n", min);

    return 0;
}