// 読み込んだ2つの整数値の和（加算結果）を表示に格納して表示

#include <stdio.h>

int main(void) {
    int x, y;

    puts("二つの整数を入力してください。");
    printf("整数x："); scanf("%d", &x);
    printf("整数y："); scanf("%d", &y);

    printf("x + x = %d\n", x + y); // 和
    printf("x - x = %d\n", x - y); // 差
    printf("x * x = %d\n", x * y); // 積
    printf("x / x = %d\n", x / y); // 商
    printf("x %% x = %d\n", x % y); // 余
    // putsの場合「%」を一つ書いたら表示可能。詳しく -> percent.c

    return 0;
}