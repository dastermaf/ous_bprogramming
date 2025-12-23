#include <stdio.h>
#include <string.h>

/* student structure */
typedef struct {
    int id;
    char name[100];
    int score;
} Student;

/* function to print student info (pass by pointer) */
void print_student(const Student* s) {
    printf("[ID: %d] %s: %d\n", s->id, s->name, s->score);
    /* s->score = 100; */ /* compile error because of const */
}

/* function to update student score (pass by pointer) */
void set_score(Student* s, int score) {
    s->score = score;
}

int main(void) {
    Student taro;

    taro.id = 1;
    strcpy(taro.name, "Taro");
    taro.score = 85;

    printf("Before update:\n");
    print_student(&taro);

    set_score(&taro, 100);

    printf("\nAfter update:\n");
    print_student(&taro);

    return (0);
}