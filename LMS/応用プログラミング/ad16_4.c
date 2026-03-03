#include <stdio.h>

typedef struct {
    int id;
    int score;
} Student;

int find_max_score(Student students[], int size) {
    int max = -1;
    int i;

    for (i = 0; i < size; i++) {
        if (students[i].score > max) {
            max = students[i].score;
        }
    }
    return max;
}

int main(void) {
    Student db[] = {{1, 80}, {2, 95}, {3, 70}};

    printf("%d", find_max_score(db, 3));

    return 0;
}