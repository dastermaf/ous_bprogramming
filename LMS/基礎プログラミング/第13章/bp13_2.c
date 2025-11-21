#include <stdio.h>

int main(void) {
    int scores[5];

    scores[0] = 3; // 添え字演算子
    scores[1] = 5;
    scores[2] = 1;
    scores[3] = 2;
    scores[4] = 4;

    printf("Enter score for student 1: %d\n", scores[0]);
    printf("Enter score for student 2: %d\n", scores[1]);
    printf("Enter score for student 3: %d\n", scores[2]);
    printf("Enter score for student 4: %d\n", scores[3]);
    printf("Enter score for student 5: %d\n", scores[4]);

    return (0);
}