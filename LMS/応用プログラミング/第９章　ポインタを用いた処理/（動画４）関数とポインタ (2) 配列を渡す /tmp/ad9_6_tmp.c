#include <stdio.h>

void print_array(/* BLANK */) {
    int i;
    for (i = 0; i < /* BLANK */; i++) {
        printf("%d ", /* BLANK */);
    }
    printf("\n");
}

void add_one(/* BLANK */, int size) {
    int i;
    for (i = 0; i < size; i++) {
        /* BLANK */
    }
}

int main(void) {
    int data[] = {1, 2, 3, 4, 5};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original: ");
    print_array(data, size);

    /* BLANK */

    printf("After add_one: ");
    print_array(data, size);

    return (0);
}
