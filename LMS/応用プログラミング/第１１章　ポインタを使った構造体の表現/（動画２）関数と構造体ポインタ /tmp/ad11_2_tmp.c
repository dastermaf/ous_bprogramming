#include <stdio.h>
#include <string.h>

/* student structure */
typedef struct {
    int id;
    char name[100];
    int score;
} Student;

/* function to print student info (pass by pointer) */
/* BLANK */ {
    printf("[ID: %d] %s: %d\n", /* BLANK */);
    /* s->score = 100; */ /* compile error because of const */
}

/* function to update student score (pass by pointer) */
/* BLANK */
/* BLANK */
/* BLANK */

int main(void) {
    Student taro;

    taro.id = 1;
    strcpy(taro.name, "Taro");
    taro.score = 85;

    printf("Before update:\n");
    /* BLANK */

    /* BLANK */

    printf("\nAfter update:\n");
    print_student(&taro);

    return (0);
}
