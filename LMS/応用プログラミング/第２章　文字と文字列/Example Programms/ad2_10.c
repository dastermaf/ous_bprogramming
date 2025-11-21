#include <stdio.h>

#define SIZE 128

int main(void) {
    char str[] = "programming";
    int i;
    // Store frequency of ASCII characters
    int frequency [SIZE] = {0};

    for (i=0; str[i] != '\0'; i++) {
        // Count using ASCII value as index
        frequency [(int)str[i]]++;
    }

    printf("String: %s\n", str);
    printf("Frequency of characters:\n");
    for (i = 0; i < SIZE; i++) {
        if (frequency[i] > 0) {
            // BUG FIX: We need to print the count for the specific character,
            // which is stored in frequency[i], not the address of the whole array.
            printf("'%c': %d\n", (char)i, frequency[i]);
        }
    }

    return (0);
}