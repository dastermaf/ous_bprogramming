#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr;
    int i;

    printf("=== Pointer Arithmetic ===\n");
    for (i = 0; i < 5; i++) {
        printf("p + %d: address=%p", i, (void*)(p + i));
        printf(", value=%d\n", *(p + i));
    }

    printf("\n=== Pointer Comparison ===\n");
    int *q = &arr[3];
    printf("p = %p\n", (void*)p);
    printf("q = %p\n", (void*)q);
    if (p < q) {
        printf("p points to an earlier element than q.\n");
    }

    printf("\n=== Pointer Subtraction ===\n");
    printf("The difference between q and p is %td elements.\n", q - p);

    return (0);
}