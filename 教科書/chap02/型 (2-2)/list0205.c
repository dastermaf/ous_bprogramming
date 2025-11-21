// 二つの整数値を読み込んで平均値を表示

#include <stdio.h>

int main(void) {
    int a, b;

    puts("二つの整数を入力せよ。");
    printf("整数a: ");
    printf("整数b:");

    scanf("%d", &a);
    scanf("%d", &b);

    printf("それらの平均は%dです。\n", (a + b) / 2 );

    return 0;
}