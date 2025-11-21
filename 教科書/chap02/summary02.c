#include <stdio.h>

int main(void)
{
    int a;                  // intは整数型
    int b;
    double r;               // doubleは浮動小数点型（実数）

    printf("整数aとbの値: ");
    scanf("%d %d", &a, &b);

    printf("a + b = %d\n", a + b);   // 加算: 2項+演算子
    printf("a - b = %d\n", a - b);   // 減算: 2項-演算子
    printf("a * b = %d\n", a * b);   // 積: 2項*演算子
    printf("a / b = %d\n", a / b);   // 商: /演算子
    printf("a %% b = %d\n", a % b);  // 剰余: %演算子

    printf("(a+b)/2 = %d\n", (a + b) / 2);              // int / int の演算結果は int
    printf("平均値 = %f\n", (double)(a + b) / 2);       // double / int の演算結果は double（キャスト式）

    printf("半径: ");
    scanf("%lf", &r);

    printf("半径%.3fの円の面積は%.3fです。\n", r, 3.14 * r * r);  // 小数部を3桁表示

    return 0;
}
