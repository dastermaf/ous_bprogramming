// 読み込んだ整数値から7を減じた値を表示するプログラムを作成せよ。


#include <stdio.h>

int main(void) {
    int no, result;

    printf("整数を入力してください： ");
    scanf("%d", &no);

    result = no - 7;

    printf("%dから7を減じると%dです。", no, result);
    return 0;
}
