#include <stdio.h>

void get_sum_and_diff(int a, int b, int* sum, int* diff) {
    *sum = a + b;
    *diff = a - b;
}

int main(void) {
    int a = 10;
    int b = 5;
    int total, difference;

    get_sum_and_diff(a, b, &total, &difference);
    printf("Sum: %d, Difference: %d\n", total, difference);

    return (0);
}