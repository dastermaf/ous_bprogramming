#include <stdio.h>

int main(void) {
    int scores[5];

    printf("Enter score for sutent 1: \n");
    scanf("%d", &scores[0]);
    printf("Enter score for sutent 2: \n");
    scanf("%d", &scores[1]);
    printf("Enter score for sutent 3: \n");
    scanf("%d", &scores[2]);
    printf("Enter score for sutent 4: \n");
    scanf("%d", &scores[3]);
    printf("Enter score for sutent 5: \n");
    scanf("%d", &scores[4]);

    printf("Score 1: %d\n", scores[0]);
    printf("Score 2: %d\n", scores[1]);
    printf("Score 3: %d\n", scores[2]);
    printf("Score 4: %d\n", scores[3]);
    printf("Score 5: %d\n", scores[4]);

    return (0);
}
