#include <stdio.h>

int main(void) {
    int i;
    double squares[5];



    for (i = 0; i < 5; i++) {
        printf("Enter value for x[%d]: ", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("dx[%d] = %d\n", i, x[i]);
    }

    return (0);
}
