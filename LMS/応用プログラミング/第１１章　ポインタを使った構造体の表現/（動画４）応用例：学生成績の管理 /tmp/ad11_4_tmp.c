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
void init_students(/* BLANK */) {
    /* BLANK */ = 1;
    strcpy(list[0].name, "Taro");
    list[0].score = 85;

    list[1].id = 2;
    strcpy(list[1].name, "Hanako");
    list[1].score = 92;

    list[2].id = 3;
    strcpy(/* BLANK */, "Jiro");
    list[2].score = 78;
}

/* function to print all students */
void print_students(/* BLANK */) {
    int i;
    printf("=== Student List ===\n");
    for (i = 0; /* BLANK */; i++) {
        printf("[ID: %d] %s: %d\n", /* BLANK */, (list + i)->name,
               (list + i)->score);
    }
    printf("====================\n");
}

/* function to search a student by id */
/* BLANK */ {
    int i;
    for (i = 0; i < n; i++) {
        if ((/* BLANK */) {
            return (/* BLANK */);
        }
    }
    return (/* BLANK */);
}

int main(void) {
    Student list[NUM_STUDENTS];
    /* BLANK */
    int search_id;

    init_students(list);
    print_students(/* BLANK */);

    printf("\nEnter student ID to search: ");
    scanf("%d", &search_id);

    /* BLANK */

    if (found != NULL) {
        printf("Found student:\n");
        printf("[ID: %d] %s: %d\n", /* BLANK */, found->name,
               found->score);
    } else {
        printf("Student with ID %d not found.\n", search_id);
    }

    return (0);
}
