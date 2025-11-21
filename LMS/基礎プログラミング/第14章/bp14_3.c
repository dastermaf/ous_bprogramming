#include <stdio.h>

#define NUMBER 5

int main(void) {
    int scores[NUMBER];
    int i;
    int max, min;

    for (i = 0; i < NUMBER; i++) {
        printf("Scores [%d]: ", i);
        scanf("%d", &scores[i]);
    }

    max = scores[0];
    min = scores[0];

    return 0;
}
