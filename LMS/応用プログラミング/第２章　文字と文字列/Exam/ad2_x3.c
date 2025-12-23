#include <stdio.h>

int main(void) {
    char str[] = "reverse";
    int i, length = 0;

    // Calculate string length
    while (str[length] != '\0') {
        length++;
    }

    printf("Original string: %s\n", str);
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}