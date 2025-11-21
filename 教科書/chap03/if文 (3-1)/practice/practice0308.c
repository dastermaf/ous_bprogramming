// 注釈が未完成

#include <stdio.h>

int main(void) {
    int n1, n2, sa;

    puts("二つの整数を入力せよ。");
    printf("整数1： "); scanf("%d", &n1);
    printf("整数2： "); scanf("%d", &n2);

    if (n1 > n2) {
        sa = n1 - n2;
    }  else {
        sa = n2 - n1;
    }

    printf("それらの差は%dです。\n", sa);

    return 0;
}