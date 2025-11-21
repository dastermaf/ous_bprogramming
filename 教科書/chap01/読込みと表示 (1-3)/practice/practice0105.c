// 読み込んだ整数値に１２を加えた値を表示するプログラムを作成せよ。

#include <stdio.h>

int main(void) {
    int no, result;

    printf("整数を入力してください： ");
    scanf("%d", &no); // ここの「%d」に\nをつけたら、「ユーザーの次の動作を待つ」と言うことになってしまって、二桁の整数入力しなかったら進められない。

    result = no + 13;

    printf("%dに13を加えると%dです。", no, result);
    return 0;
}
