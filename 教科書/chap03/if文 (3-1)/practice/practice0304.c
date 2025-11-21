// 注釈が未完成

#include <stdio.h>

int main() {
    int n1, n2;

    puts("二つの整数を入力せよ。");
    printf("整数A： ");
    scanf("%d", &n1);
    printf("整数B： ");
    scanf("%d", &n2);

    if (n1 == n2) {
        puts("AとBが等しいです");
    } else if (n1 > n2) {
        puts("AがBより大きいです");
    } else {
        puts("AがBより小さいです");
    }
}