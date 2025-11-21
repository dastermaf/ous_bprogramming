// 読み込んだ整数値は奇数／偶数であるか偶数でありか（好きなだけ繰り返す）

#include <stdio.h>

int main(void) {
    int retry; // 処理を続けるか

    do {
        int no;

        printf("整数を入力せよ：");
        scanf("%d", &no);

        if (no % 2)
            puts("その数は奇数です。");
        else
            puts("その数は偶数です。");

        printf("もう一度？ [Yes・・・1／No・・・0] ：");

    } while (retry == 0);

    return 0;
}