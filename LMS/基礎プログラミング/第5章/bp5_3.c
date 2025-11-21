#include <stdio.h>

int main(void) {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2) {
        printf("%d is an odd number.\n", num);
    }

    return (0);
}
