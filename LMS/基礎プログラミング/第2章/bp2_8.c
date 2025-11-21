#include <stdio.h>

int main(void) {
    printf("  | %d %d %d\n", 1, 2, 3);
    printf("--+------\n");
    printf("%d | %d %d %d\n", 1, 2, 3, 4);
    printf("%d | %d %d %d\n", 2, 2, 5, 6);
    printf("%d | %d %d %d\n", 3, 3, 6, 9);

    return (0);
}