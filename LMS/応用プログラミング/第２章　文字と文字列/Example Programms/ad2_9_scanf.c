// 文字列の回分判定

#include <stdio.h>

int main(void) {
    char str[11];
    int length = 0;
    int i;
    int is_palindrome = 1; // 1: palindrome, 0: not palindrome

    printf("Enter the word: "); scanf("%10s", str);

    // Calculate string length
    while (str[length] != '\0') {
        length++;
    };

    // Compare from both ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            is_palindrome = 0; // Not a Palindrome if characters differ
            break;
        }
    }

    printf("String: %s\n", str);
    if (is_palindrome) {
        printf("Is a palindrome.\n");
    } else {
        printf("Is not a palindrome");
    }

    return (0);
}