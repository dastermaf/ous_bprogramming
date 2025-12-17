#include <stdio.h>

int main(void) {
    char* names[] = {"Alice", "Bob", "Charlie", "David"};
    int num_names = sizeof(names) / sizeof(names[0]);
    int i;

    printf("=== Student Name List ===\n");
    for (i = 0; i < num_names; i++) {
        printf("names[%d] = %s\n", i, names[i]);
    }

    return (0);
}