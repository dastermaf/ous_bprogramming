//

#include <stdio.h>

int main(void) {
    int n;

    printf("整数を入力せよ： \n");
    scanf("%d", &n);

    if (n % 5)
        puts("その数は割り切れません。");
    else
        puts("その数は割り切れます。");

    return 0;
}
