#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p;
    int i;

    p = arr; /* p = &arr[0] is same */

    printf("Pointer access:\n");
    for (i = 0; i < 5; i++) {
        printf("*(p + %d) = %d\n", i, *(p + i));
    }

    printf("\nArray notation:\n");
    for (i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}