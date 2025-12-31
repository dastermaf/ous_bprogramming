#include <stdio.h>

struct Book {
    int id;
    char title[100];
    int is_borrowed;
};

/* */
void search_book(struct Book books[], int count, char* keyword) {
    int i, j, k;
    int match;
    printf("Search Result for '%s': \n", keyword);

    for (i = 0; i < count; i++) {
        match = 0;
        /* Check if title contains keyword */
        for (j = 0; books[i].title[j] != '\0'; j++) { // i - book count (increments above), j - title (increments here)
            for (k = 0; keyword[k] != '\0'; k++) { // k - keyword
                if (books[i].title[j + k] != keyword[k]) {
                    break;
                }
            }
            if (keyword[k] == '\0') {
                match = 1;
                break;
            }
        }
        if (match) {
            printf("[ID: %d] %s\n", books[i].id, books[i].title);
        }
    }
}

int main(void) {
    struct Book library[] = {
        {101, "C Programming", 0},
        {102, "Advanced C", 0},
        {103, "Data Structures", 0},
        {104, "C++ Basics", 0},
    };

    search_book(library, 4, "C");

    return (0);
}