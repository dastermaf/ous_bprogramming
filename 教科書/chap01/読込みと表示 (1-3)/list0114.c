// 読み込んだ2つの整数値の和（加算結果）を表示に格納して表示

#include <stdio.h>

int main(void) {
    int n1, n2;

    puts("二つの整数を入力してください。"); // printf("ABCDE\n")とほぼ同じ働きします。
    printf("整数１："); scanf("%d", &n1);
    printf("整数２："); scanf("%d", &n2);

    int wa = n1 + n2; // n1とn2の和でwaを初期化

    printf("それらの和は%dです。\n", wa); // 和を表示
    printf("すなわちn1 + n2 = %dです。\n", wa); // 和を表示
    
    return 0;
}
