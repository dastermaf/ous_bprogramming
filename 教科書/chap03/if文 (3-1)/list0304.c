//

#include <stdio.h>

int main(void) {
    int n;

    printf("整数を入力せよ： \n");
    scanf("%d", &n);

    if (n % 2)
        puts("その数は奇数です。");
    else
        puts("その数は偶数です。");

    return 0;
}
