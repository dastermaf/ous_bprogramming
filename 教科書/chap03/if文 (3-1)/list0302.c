//

#include <stdio.h>

int main(void) {
    int n;
// if statement、if文。「（）」にある式を制御式と呼ばれます。
    printf("整数を入力せよ： \n");
    scanf("%d", &n);

    if (n % 2)
        puts("その数は奇数です。");

    return 0;
}
