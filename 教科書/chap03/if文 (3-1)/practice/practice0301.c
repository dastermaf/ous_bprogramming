// 注釈が未完成

#include <stdio.h>

int main() {
    int n1, n2;

    puts("二つの整数を入力せよ。");
    printf("整数A： ");
    scanf("%d", &n1);
    printf("整数B： ");
    scanf("%d", &n2);



    if (n1) {
        if (n2) {
            if (n2 % n1 == 0) {
                puts("AはBの約数です。\n");
            } else if (n1 % n2 == 0) {
                puts("BはAの約数です。\n");
            } else {
                puts("AはBの約数ではありません。\n");
            }
        }
    }
}