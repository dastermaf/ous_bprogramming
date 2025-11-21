#include <stdio.h>

int main(void) {
    int total = 500, used, available;
    int threshold = 100;

    printf("Enter used capacity in GB:");
    scanf("%d", &used);

    available = total - used;
    if (available < threshold)
        printf("Available capacity is below threshold!\n"); // 複合文がなかったら、1文だけかかけます

    return 0;
}
