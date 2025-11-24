#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    /* BLANK */
    int i;

    printf("=== Pointer Arithmetic ===\n");
    for (i = 0; i < 5; i++) {
        printf("p + %d: address=%p", i, (void*)(p + i));
        printf(", value=%d\n", /* BLANK */);
    }

    printf("\n=== Pointer Comparison ===\n");
    /* BLANK */
    printf("p = %p\n", (void*)p);
    printf("q = %p\n", /* BLANK */);
    if (/* BLANK */) {
        printf("p points to an earlier element than q.\n");
    }

    printf("\n=== Pointer Subtraction ===\n");
    printf("The difference between q and p is %td elements.\n",
           /* BLANK */);

    return (0);
}
