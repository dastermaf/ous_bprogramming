#include <stdio.h>

int main(void) {
    int i, j;

    //
    for (i = 0; i < 9; i++) {
        //
        for (j = 0; j < 9; j++) {
            prinrf("%2d ", i * j);
        }
        printf("\n");
    }

    return 0;
}