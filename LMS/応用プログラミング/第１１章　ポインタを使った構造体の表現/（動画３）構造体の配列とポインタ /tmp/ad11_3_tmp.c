#include <stdio.h>
#include <string.h>

/* student structure */
typedef struct {
    int id;
    char name[100];
    int score;
} Student;

/* function to print all students */
void print_students(/* BLANK */, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("[ID: %d] %s: %d\n", /* BLANK */);
    }
}

/* function to search a student by id */
/* BLANK */ {
    int i;
    for (i = 0; i < n; i++) {
        if (/* BLANK */) {
            /* BLANK */
        }
    }
    return (NULL);
}

int main(void) {
    Student list[3];
    /* BLANK */

    list[0].id = 1;
    strcpy(list[0].name, "Taro");
    list[0].score = 85;

    list[1].id = 2;
    strcpy(list[1].name, "Hanako");
    list[1].score = 92;

    list[2].id = 3;
    strcpy(list[2].name, "Jiro");
    list[2].score = 78;

    print_students(list, 3);

    printf("\nSearching for ID 2...\n");
    /* BLANK */

    if (/* BLANK */) {
        printf("Found: [ID: %d] %s: %d\n", /* BLANK */, found->name,
               found->score);
    } else {
        printf("Not found.\n");
    }

    return (0);
}
