#include <stdio.h>

void print_array(int *a, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", *(a + i));
    }
    printf("\n");
}

void add_one(int *b, int size) {
    int i;
    for (i = 0; i < size; i++) {
        ++*(b + i);
    }
}

int main(void) {
    int data[] = {1, 2, 3, 4, 5};
    int size = sizeof(data) / sizeof(data[0]);

    printf("Original: ");
    print_array(data, size);

    add_one(data, size);

    printf("After add_one: ");
    print_array(data, size);

    return (0);
}