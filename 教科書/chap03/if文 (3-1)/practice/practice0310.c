// 注釈が未完成

#include <stdio.h>

int main() {
    int n1, n2, n3;

    puts("二つの整数を入力せよ。");
    printf("整数A： "); scanf("%d", &n1);
    printf("整数B： "); scanf("%d", &n2);
    printf("整数C： "); scanf("%d", &n3);

    if (n1 == n2 && n2 == n3) {
        puts("三つの値は等しいです。");
    } else if (n1 == n2 || n2 == n3 || n3 == n1) {
        puts("二つの値は等しいです。");
    } else {
        puts("三つの値は異なります。");
    }
}
