#include <stdio.h>

int main(void) {
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 90) {
        if (score >= 95) {
            printf("Your grade is A.\n");
        } else {
            printf("Your grade is B.\n");
        }
    } else if (score >= 80) {
        printf("Your grade is C.\n");
    } else {
        printf("Your grade is D.\n");
    }

    return 0;
}