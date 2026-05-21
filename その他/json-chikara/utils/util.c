#include <stdio.h>
#include "util.h"

void clear(void) {
    clearerr(stdin);
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}