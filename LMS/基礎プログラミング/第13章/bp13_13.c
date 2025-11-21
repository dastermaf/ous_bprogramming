#include <stdio.h>

int main(void) {
    int i;
    double dx [7];



    for (i = 0; i < 7; i++) {
        dx[i] = 5.5;
    }

    for (i = 0; i < 7; i++) {
        printf("dx[%d] = %f\n", i, dx[i]);
    }

    return (0);
}
