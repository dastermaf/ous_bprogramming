#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[20] = "hello";
    char str2[] = "world";
    char str3[20];
    char* p;

    // strcpy: string copy
    strcpy(str3, str1); // strcpy (destination, source)
    printf("strcpy(str3, str1): %s\n", str3);

    // strcat: string concatenation
    strcat(str3, " ");
    strcat(str3, str2);
    printf("strcat(str3, ...): %s\n", str3);

    // strcmp: string comparison
    printf("strcmp(\"abc\", \"abc\"): %d\n", strcmp("abc", "abc"));
    printf("strcmp(\"abc\", \"abd\"): %d\n", strcmp("abc", "abd"));
    printf("strcmp(\"abd\", \"abc\"): %d\n", strcmp("abd", "abc"));

    // strchr: character search
    p = strchr(str3, 'w');
    if (p != NULL) {
        printf("strchr(str3, 'w'): found at %s\n", p);
        *p = 'W';
    }
    printf("Modified string: %s\n", str3);

    return (0);
}