// 注釈が未完成

#include <stdio.h>

int main() {
    int num;

    printf("値を入力せよ（文字でも可能）： "); scanf("%d", &num);

    if (num) {
        puts("ifは1を生成しました。");
    } else {
        puts("ifは0を生成しました。");
    }
}