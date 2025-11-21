#include <stdio.h>

int main(void) {
    int total = 500, used, available;
    int threshold = 100;

    printf("Enter used capacity in GB:");
    scanf("%d", &used);

    available = total - used;
    if (available < threshold) {                                    // 複合文
        printf("Available capacity is below threshold!\n");   // 複合文
        printf("Only %d GB left.\n", available);              // 複合文
    }                                                               // 複合文
    return 0;
}
