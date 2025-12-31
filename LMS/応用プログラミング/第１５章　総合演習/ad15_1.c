#include <stdio.h>

/* */
void parse_csv(char* line) {
    char* p = line;
    printf("Field: ");
    while (*p != '\0') {
        if (*p == ',') {
            printf("\nField: ");
        } else {
            printf("%c", *p);
        }
        p++;
    }
    printf("\n");
};

int main(void) {
    char data[] = "A,B,C";

    printf("Original: %s\n", data);
    printf("=== Parsed ===\n");
    parse_csv(data);

    return (0);
}