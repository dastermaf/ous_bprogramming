// 文字列

#include <stdio.h>

int main(void) {
    char str[5]; // Declare a character array

    str[0] = 'H';
    str[1] = 'i';
    str[2]= '\0'; // Null terminator

    printf("Original str: %s\n", str); // 文字列の全体を表示する際に%sを使用します
    printf("Original str[0]: %c\n", str[0]); // 配列の各要素を表示する際に%cを使用します
    str[0]= 'A'; // Modify
    printf("Modified str: %s\n", str);
    printf("Modified str[0]: %c\n", str[0]);

    return (0);
}