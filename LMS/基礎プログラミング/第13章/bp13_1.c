#include <stdio.h>

int main(void) {
    int score1, score2, score3, score4, score5;
    int sum = 0;
    double average;

    printf("Enter score for sutent 1: \n");
    scanf("%d", &score1);

    printf("Enter score for sutent 2: \n");
    scanf("%d", &score2);

    printf("Enter score for sutent 3: \n");
    scanf("%d", &score3);

    printf("Enter score for sutent 4: \n");
    scanf("%d", &score4);

    printf("Enter score for sutent 5: \n");
    scanf("%d", &score5);

    sum = score1 + score2 + score3 + score4 + score5;

    average = (double)sum / 5;

    printf("Total sum: %d\n", sum);
    printf("Average: %1.f\n", average);

    return (0);
}
