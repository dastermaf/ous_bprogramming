#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int score;
} Student;

void print_student(const Student* s) {
    printf("Name: %s\n", s->name);
    printf("Score: %d\n", s->score);
}

int main(void) {
    Student s1;

    strcpy(s1.name, "Taro");
    /* Invalid score! */
    s1.score = -100;

    /* Display info with invalid score */
    print_student(&s1);

    return (0);
}