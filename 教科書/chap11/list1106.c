// 文字列のコピー

#include <stdio.h>

//--- 文字列sをd二コピーする ---//
char *str_sopy(char *d, const char *s) {
    char *t = d;

    while (*d++ = *s++)
        ;
    return t;
}

int main(void) {
    char str[128] = "ABC";
    char tmp[128];

    printf("str = \"%s\"\n", str);

    printf("コピーするのは：");
    scanf("%s", tmp);

    str_sopy(str, tmp);

    printf("str = \"%s\"\n", str);

    return 0;
}