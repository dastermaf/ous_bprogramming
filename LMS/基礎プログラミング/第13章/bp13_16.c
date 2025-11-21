//#include <stdio.h>

#include <stdio.h>

int main(void) {
    int i;
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];

    // Copy elements from array 'a' to array 'b' using a loop
    for (i = 0; i < 5; i++) {
        b[i] = a[i];
    }

    printf("     a => b\n");
    printf("    ---------\n");
    for (i = 0; i < 5; i++) {
        printf("[%d] %3d = %3d\n", i, a[i], b[i]);
    }

    return 0;
}
