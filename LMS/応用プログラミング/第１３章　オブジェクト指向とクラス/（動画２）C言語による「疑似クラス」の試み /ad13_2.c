#include <stdio.h>
#include <string.h>

/* Structure for a student */
typedef struct {
    char name[20];
    int score;
} Student;

/* Function to update score */
void update_score(Student* s, int new_score) {
    s->score = new_score;
}

/* Function to display student info */
void print_student(Student *s) {
    printf("Name: %s\n", s->name);
    printf("Score: %d\n", s->score);
}

int main(void) {
    Student s1;

    /* Initialize manually */
    strcpy(s1.name, "Hanako");
    s1.score = 90;

    /* Update score and display */
    print_student(&s1);
    update_score(&s1, 95);
    print_student(&s1);

    return (0);
}