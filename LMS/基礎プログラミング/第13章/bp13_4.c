#include <stdio.h>

int main(void) {
    int scores[5];
    int sum = 0;
    double average;

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

    sum = scores[0] + scores[1] + scores[2] + scores[3] + scores[4];

    average = (double)sum / 5;

    printf("Total sum: %d\n", sum);
    printf("Average: %1.f\n", average);

    return (0);
}
