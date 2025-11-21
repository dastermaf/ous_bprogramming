// char型

#include <stdio.h>

int main(void) {
    char input_char;

    // Input
    printf("Enter a character: ");
    scanf("%c", &input_char);

    // Comparison and operation
    if (input_char >= 'A' && input_char <= 'Z') {
        // Convert uppercase to lowercase
        input_char = input_char + ('a' - 'A');
        printf("Converted to lowercase: %c\n", input_char);
    } else if (input_char >= 'a' && input_char <= 'z') {
        // Convert lowercase to uppercase
        input_char = input_char - ('a' - 'A');
        printf("Converted to uppercase: %c\n", input_char);
    } else if (input_char >= '0' && input_char <= '9') {
        // Convert digit to next digit
        if (input_char == '9') {
            input_char = '0'; // Wrap '9' to '0'
        } else {
            input_char = input_char + 1;
        }
        printf("Converted to next digit: %c\n", input_char);
    } else {
        printf("No conversion: %c\n", input_char);
    }

    return (0);
}