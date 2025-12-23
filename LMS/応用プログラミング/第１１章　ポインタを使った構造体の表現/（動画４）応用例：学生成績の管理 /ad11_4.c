#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 3

/* student structure */
typedef struct {
    int id;
    char name[100];
    int score;
} Student;

/* function to initialize student data */
void init_students(Student* list) {
    list[0].id = 1;
    strcpy(list[0].name, "Taro");
    list[0].score = 85;

    list[1].id = 2;
    strcpy(list[1].name, "Hanako");
    list[1].score = 92;

    list[2].id = 3;
    strcpy(list[2].name, "Jiro");
    list[2].score = 78;
}

/* function to print all students */
void print_students(const Student* list, int n) {
    int i;
    printf("=== Student List ===\n");
    for (i = 0; i < n; i++) {
        printf("[ID: %d] %s: %d\n", (list + i)->id, (list + i)->name,
               (list + i)->score);
    }
    printf("====================\n");
}

/* function to search a student by id */
const Student* search_student(const Student* list, int n, int id) {
    int i;
    for (i = 0; i < n; i++) {
        if ((list + i)->id == id) {
            return (list + i);
        }
    }
    return (NULL);
}

int main(void) {
    Student list[NUM_STUDENTS];
    const Student* found;
    int search_id;

    init_students(list);
    print_students(list, NUM_STUDENTS);

    printf("\nEnter student ID to search: ");
    scanf("%d", &search_id);

    found = search_student(list, NUM_STUDENTS, search_id);

    if (found != NULL) {
        printf("Found student:\n");
        printf("[ID: %d] %s: %d\n", found->id, found->name, found->score);
    } else {
        printf("Student with ID %d not found.\n", search_id);
    }

    return (0);
}