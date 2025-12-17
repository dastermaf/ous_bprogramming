#include <stdio.h>

// A function that calculates the length of a string using a pointer.
size_t my_strlen(/* BLANK */) {
    size_t len = 0;
    /* BLANK */ {
        len++;
        /* BLANK */
    }
    return (len);
}

// A function that converts a string to lowercase using a pointer.
void to_lower(char* p) {
    /* BLANK */
}

int main(void) {
    char s[] = "Hello, WORLD!";

    printf("Original: %s\n", s);
    printf("Length: %zu\n", my_strlen(s));

    to_lower(s);
    printf("Lowercase: %s\n", s);

    return (0);
}
