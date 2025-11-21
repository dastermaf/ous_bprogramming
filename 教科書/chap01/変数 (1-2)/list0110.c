// 2つの変数を初期化して表示

#include <stdio.h>

int main(void) {

    int x = 57;
    int y = x + 12; // 代入せずに初期化を行っている。

    printf("xの値は%dです。\n", x);
    printf("yの値は%dです。\n", y);

    return 0;
}
 // 初期化：変数の生成時に値を入れること。
 // 代入：生成済みの変数に値を入れること。
