#include <stdio.h>

void analyze_scores(int* scores, int size, double* avg, int* max, int* min) {
    int i, sum = 0;

    *max = *scores;
    *min = *scores;

    for (i = 0; i < size; i++) {
        sum += scores[i];
        if (*(scores + i) > *max) {
            *max = *(scores + i);
        }
        if (*(scores + i) < *min) {
            *min = *(scores + i);
        }
    }
    *avg = (double)sum / size;
}

int main(void) {
    int scores[] = {88, 76, 92, 64, 80};
    int size = sizeof(scores) / sizeof(scores[0]);
    int average;
    int max_score, min_score;

    analyze_scores(scores, size, &average, &max_score, &min_score);

    printf("Average: %.2f\n", average);
    printf("Max score: %d\n", max_score);
    printf("Min score: %d\n", min_score);

    return (0);
}