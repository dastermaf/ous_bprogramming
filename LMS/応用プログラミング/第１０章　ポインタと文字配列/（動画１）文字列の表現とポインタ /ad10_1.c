#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "hello";
    char *p = "world";

    printf("=== sizeof ===\n");
    printf("sizeof(s) = %zu\n", sizeof(s));
    printf("sizeof(p) = %zu\n", sizeof(p));

    printf("\n=== strlen ===\n");
    printf("strlen(s) = %zu\n", strlen(s));
    printf("strlen(p) = %zu\n", strlen(p));

    printf("\n=== modification ===\n");
    s[0] = 'H';
    printf("s: %s\n", s);

    p = 'W';

    // The following line will cause a runtime error.
    // p[0] = 'W';
    // printf("p: %s\n", p);

    return (0);
}