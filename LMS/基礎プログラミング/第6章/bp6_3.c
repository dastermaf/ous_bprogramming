#include <stdio.h>

int main(void) {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("%d is zero.\n", num);
    } else {
        printf("%d is non-zero.\n", num);
    }

    return 0;
}
