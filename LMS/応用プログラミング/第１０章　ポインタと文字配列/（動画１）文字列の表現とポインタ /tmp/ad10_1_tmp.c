#include <stdio.h>
#include <string.h>

int main(void) {
    /* BLANK */;
    /* BLANK */;

    printf("=== sizeof ===\n");
    printf("sizeof(s) = %zu\n", /* BLANK */);
    printf("sizeof(p) = %zu\n", /* BLANK */);

    printf("\n=== strlen ===\n");
    printf("strlen(s) = %zu\n", strlen(s));
    printf("strlen(p) = %zu\n", strlen(p));

    printf("\n=== modification ===\n");
    /* BLANK */;
    printf("s: %s\n", s);

    // The following line will cause a runtime error.
    // p[0] = 'W';
    // printf("p: %s\n", p);

    return (0);
}
