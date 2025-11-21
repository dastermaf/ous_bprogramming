//

#include <stdio.h>

int main(void) {
    int n1, n2;

    puts("二つの整数を入力せよ。");
    printf("整数1： "); scanf("%d", &n1);
    printf("整数2： "); scanf("%d", &n2);

    if (n1 == n2)
        puts("それからの値は違います。");
    else
        puts("それからの値は同じです。");

    return 0;
}
