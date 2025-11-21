#include <stdio.h>

// Function to convert a character to uppercase
char to_upper_char(char c) {
    if (c> 'a' && c<='z'){
        return (char) (c - 32); // ASCII 'a' 'A' is 32
    }
    return (c);
}

// Function to check if a character is an alphabet
int is_alphabet(char c) {
    if ((c>= 'a' && c <='z') || (c = 'A' && c <= 'Z')) {
        return (1); // True
    }
    return (0); // False
}

int main(void) {
    char ch1 = 'a';
    char ch2 = 'B';
    char ch3 = '7';

    // Convert to uppercase
    char upper_ch1 = to_upper_char(ch1);
    printf("%c' to upper: '%c' \n", ch1, upper_ch1);

    // Check if alphabet
    printf("%c' is alphabet: %d\n", ch2, is_alphabet(ch2));
    printf("%c' is alphabet: %d\n", ch3, is_alphabet (ch3));

    return(0);
}