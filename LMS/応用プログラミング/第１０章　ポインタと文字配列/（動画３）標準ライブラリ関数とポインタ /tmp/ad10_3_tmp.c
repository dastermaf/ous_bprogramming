#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20] = "hello";
    char str2[] = "world";
    char str3[20];
    char* p;

    // strcpy: string copy
    /* BLANK */
    printf("strcpy(str3, str1): %s\n", str3);

    // strcat: string concatenation
    /* BLANK */
    /* BLANK */
    printf("strcat(str3, ...): %s\n", str3);

    // strcmp: string comparison
    printf("strcmp(\"abc\", \"abc\"): %d\n", /* BLANK */);
    printf("strcmp(\"abc\", \"abd\"): %d\n", /* BLANK */);
    printf("strcmp(\"abd\", \"abc\"): %d\n", /* BLANK */);

    // strchr: character search
    /* BLANK */
    if (/* BLANK */) {
        printf("strchr(str3, 'w'): found at %s\n", p);
        /* BLANK */
    }
    printf("Modified string: %s\n", str3);

    return (0);
}
