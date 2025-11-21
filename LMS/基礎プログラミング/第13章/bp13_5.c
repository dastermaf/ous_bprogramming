#include <stdio.h>

int main(void) {
    int scores[5];
    int i, sum = 0;
    double average;

    for (i = 0; i < 5; i++) {
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += scores[i];
    }

    average = (double)sum / 5;

    printf("Total sum: %d\n", sum);
    printf("Average: %1.f\n", average);

    return (0);
}
