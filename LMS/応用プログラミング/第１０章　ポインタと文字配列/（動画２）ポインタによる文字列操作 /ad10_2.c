#include <stdio.h>

// A function that calculates the length of a string using a pointer.
size_t my_strlen(const char *p) {
    size_t len = 0;
    while (*p != '\0') {
        len++;
        p++;
    }
    return (len);
}

// A function that converts a string to lowercase using a pointer.
void to_lower(char* p) {
    while (*p != '\0') {
        if (*p >= 'A' && *p <= 'Z') {
            *p = *p + ('a' - 'A');
        }
        p++;
    }
}

int main(void) {
    char s[] = "Hello, WORLD!";

    printf("Original: %s\n", s);
    printf("Length: %zu\n", my_strlen(s));

    to_lower(s);
    printf("Lowercase: %s\n", s);

    return (0);
}