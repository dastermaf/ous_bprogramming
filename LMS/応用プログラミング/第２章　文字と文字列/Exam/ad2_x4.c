#include <stdio.h>

int main(void) {
    char input_str[100];
    char output_str[100];
    char vowels[] = "aiueoAIUEO";
    char current_char;

    int i, j;
    int out_count = 0;
    int is_char_vowel;

    printf("Enter a string: ");
    scanf("%s", input_str);

    for (i = 0; input_str[i] != '\0'; i++) {
        current_char = input_str[i];
        is_char_vowel = 0;

        for (j = 0; vowels[j] != '\0'; j++) {
            if (vowels[j] == current_char) {
                is_char_vowel = 1;
                break;
            }
        }

        if (!is_char_vowel) {
            output_str[out_count] = current_char;
            out_count++;
        }
    }

    output_str[out_count] = '\0';

    printf("String without vowels: %s\n", output_str);

    return 0;
}
