//

#include <stdio.h>

int main(void) {
    int no;

    printf("整数を入力せよ： \n");
    scanf("%d", &no);

    if (no % 2)
        if (no % 2 == 0)
            puts("その数は奇数です。");
        else
            puts("その数は偶数です。");
    else
        puts("正ではない値が入力されました。\a\n");

    return 0;
}
