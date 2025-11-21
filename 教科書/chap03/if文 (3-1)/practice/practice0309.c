// 注釈が未完成

#include <stdio.h>

int main(void) {
    int n1, n2, n3;

    puts("二つの整数を入力せよ。");
    printf("整数1： "); scanf("%d", &n1);
    printf("整数2： "); scanf("%d", &n2);
    printf("整数3： "); scanf("%d", &n3);

    int min = n1;
    printf("最小値は%dです。\n", n1 < min ? min = n2 : min = n3);

    return 0;
}