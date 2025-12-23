#include <stdio.h>
#include <string.h>

/* student structure */
typedef struct {
    int id;
    char name[100];
    int score;
} Student;

int main(void) {
    Student s;
    Student* p;

    p = &s;

    p->id = 1;
    strcpy(p->name, "Taro");
    p->score = 85;

    printf("s.id: %d\n", s.id);
    printf("s.name: %s\n", s.name);
    printf("s.score: %d\n", s.score);

    printf("p->id: %d\n", p->id);
    printf("p->name: %s\n", p->name);
    printf("p->score: %d\n", p->score);

    printf("(*p).id: %d\n", (*p).id);
    printf("(*p).name: %s\n", (*p).name);
    printf("(*p).score: %d\n", (*p).score);

    return (0);
}