// 読み込んだ背数値は5で割り切れないか

#include <stdio.h>

int main(void) {
    int n;

    printf("整数値を入力せよ： \n");
    scanf("%d", &n);

    if (n % 5) // if statement、if文。「（）」にある式を制御式と呼ばれます。
        puts("その数は5で割り切れません");

    return 0;
}
