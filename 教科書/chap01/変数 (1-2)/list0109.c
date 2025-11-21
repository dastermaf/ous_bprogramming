// ２つの変数に整数値を代入せずに表示

#include <stdio.h>

int main(void) {
    int x, y; // 不定値・ゴミの値が入れられる。int -> 不定値

    printf("xの値は%dです。\n", x);
    printf("yの値は%dです。\n", y);

    return 0;
}
