#include <stdio.h>

int main(void) {
    int total = 500, used, available;
    int threshold = 100;
    printf("Enter used capacity in GB: ");
    scanf("%d", &used);
    available = total - used;
    if (available < threshold) {
        printf("Available capacity is below the threshold!\n");
        printf("Only %d GB left.\n", available);
    } else {
        printf("Available capacity is sufficient.\n");
        printf("%d GB is available. \n", available);
    }
    return 0;
}
