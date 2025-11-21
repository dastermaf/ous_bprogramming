#include <stdio.h>

int main(void) {
    int vx, vy; // 変数名に意味を与えましょう

    vx = 15; // ここの「＝」は代入演算子（単純代入演算子）
    vy = vx + 3; // 加算演算子を行った部分を加算式といいます、加算式と代入を含めて代入式なります。代入式 + 加算式 = 式文；

    printf("vxの値は%dです。\n", vx);
    printf("vyの値は%dです。\n", vy);

    return (0);
}