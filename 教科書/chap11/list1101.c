// 配列による文字列とボインたによる文字列

#include <stdio.h>

int main(void) {
    char str[] = "ABC";
    char *ptr = "123";

    printf("str = \"%s\"\n", str);
    printf("ptr = \"%s\"\n", ptr);

    return 0;
}