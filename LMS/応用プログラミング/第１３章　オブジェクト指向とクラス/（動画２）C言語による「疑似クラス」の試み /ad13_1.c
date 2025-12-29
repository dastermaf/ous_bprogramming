#include <stdio.h>
#include <string.h>

/* Structure for student */
typedef struct {
    char name[20];
    int score;
} Student;

/* Function to initialize student */
Student init_student(const char* name, int score) {
    Student s;

    strcpy(s.name, name);
    s.score = score;

    return (s);
}

/* Function to display student info */
void print_student(Student s) {
    printf("Name: %s\n", s.name);
    printf("Score: %d\n", s.score);
}

int main(void) {
    Student s1;

    /* Initialize and display */
    s1 = init_student("Taro", 80);
    print_student(s1);

    return (0);
}