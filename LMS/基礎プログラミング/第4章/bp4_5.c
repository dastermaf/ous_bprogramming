#include <stdio.h>

int main(void) {
    int num;

    printf("Input the integer: ");
    scanf("%d", &num); // &が必要です。
    printf("The input integer was %d.\n", num);

    return (0);
}
