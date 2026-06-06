#include <stdio.h>
#include <ctype.h>

#include "util.h"

void clear(void) {
    clearerr(stdin);
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int indigit(const char *str) {
    while (*str) {
        if (!isdigit(*str)) return 0;
        str++;
    }
    return 1;
}