// 注釈が未完成

#include <stdio.h>

int main(void) {
    int n;

    printf("整数を入力せよ： \n");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    printf("絶対値は%dです。\n", n);

    return 0;
}