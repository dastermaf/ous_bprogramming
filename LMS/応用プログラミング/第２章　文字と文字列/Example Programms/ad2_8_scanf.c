//

#include <stdio.h>

int main(void) {
    char text[11];
    int i = 0, word_count = 0;
    int in_word = 0; // 0: outside word, 1: inside word

    printf("Print the words: ");
    scanf("%10s", text);

    while (text[i] != '\0') {
        if (text[i] == ' ' || text[i] == '\t' || text[i] == '\n') {
            in_word = 0; // If space found, outside word
        } else if (in_word == 0) {
            // If entering a word from outside, increment count
            word_count++;
            in_word = 1;
        }
        i++;
    }

    printf("String: \"%s\"\n", text);
    printf("Word count: %d\n", word_count);
    return 0;
}