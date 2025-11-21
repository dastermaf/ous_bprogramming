#include <stdio.h>
#include <string.h> // Required for strlen function

int main(void) {
    char str[] = "Hello";
    size_t length = strlen(str); // Get the length of the string
    printf("ength of string: %zu\n", length);

    return(0);
}