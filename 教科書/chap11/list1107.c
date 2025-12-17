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
    char tmp[128];
    char s1[128], s2[128];

    printf("")
}