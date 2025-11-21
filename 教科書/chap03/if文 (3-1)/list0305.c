//

#include <stdio.h>

int main(void) {
    int num;

    printf("整数を入力せよ： \n");
    scanf("%d", &num);

    if (num) // (num != 0)と同じ
        puts("その数は0ではありません。");
    else
        puts("その数は0です。");

    return 0;
}
