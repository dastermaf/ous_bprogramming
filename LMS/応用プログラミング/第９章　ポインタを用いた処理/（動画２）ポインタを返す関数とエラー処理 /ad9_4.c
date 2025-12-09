#include <stdio.h>

int* search(int* data, int size, int target) {
    int i;

    for (i = 0; i < size; i++) {
        if (data[i] == target) {
            return (&data[i]);
        }
    }
    return (NULL);
}

int main(void) {
    int data[] = {10, 20, 30, 40, 50};
    int* p;

    p = search(data, 5, 30);

    if (p == NULL) {
        printf("Not found\n");
    } else {
        printf("Found: %d\n", *p);
    }

    return (0);
}