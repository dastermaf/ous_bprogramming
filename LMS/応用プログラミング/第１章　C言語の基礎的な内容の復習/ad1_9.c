#include <stdio.h>

#define SIZE 4

int main(void) {
    int numbers[SIZE] = {10, 20, 30, 40};
    int i, sum = 0;

    for (i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }
    printf("Sum: %d\n", sum);

    return (0);
}