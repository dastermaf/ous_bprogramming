// 文字列のループ処理

#include <stdio.h>

int main(void) {
    char input_string[100];
    int length = 0;

    printf("Enter a string: ");
    scanf("%s", input_string);

    // Calculate the length of the string using a while loop
    while (input_string[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return (0);
}