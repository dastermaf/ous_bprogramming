#include <stdio.h>

int main(void) {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num) {
        printf("%d is non-zero.\n", num);
        return 0;
    } else {
        printf("%d is zero.\n", num);
        return (0);
    }
}