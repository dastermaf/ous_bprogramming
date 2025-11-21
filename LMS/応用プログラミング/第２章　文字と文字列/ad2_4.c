// 文字列の入力と出力

#include <stdio.h>

int main(void) {
    char name[20]; // Array to store the name

    printf("Enter your name: ");
    // Always specify the width to prevent buffer overflows.
    // For a char array of size N, the width should be N-1
    // to leave space for the null terminator ('\0').
    scanf("%19s", name);

    printf("Hello, %s!\n", name);

    return(0);
}