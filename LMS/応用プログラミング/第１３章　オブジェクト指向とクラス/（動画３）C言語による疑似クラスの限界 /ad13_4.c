#include <stdio.h>

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

    /*
     * Initialization is forgotten!
     * Values are undefined (garbage).
     */
    print_student(&s1);

    return (0);
}