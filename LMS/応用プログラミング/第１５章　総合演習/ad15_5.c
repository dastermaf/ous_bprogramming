#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char song[50];
    struct Node* next;
};

/* Remove song from list */
struct Node* remove_song(struct Node* head, char* target) {
    struct Node* p = head;
    struct Node* prev = NULL;

    while (p != NULL) {
        if (strcmp(p->song, target) == 0) {
            if (prev == NULL) {
                head = p->next; /* Remove head */
            } else {
                prev->next = p->next; /* Bypass node */
            }
            free(p);
            printf("Removed: '%s'\n", target);
            return(head);
        }
        prev = p;
        p = p->next;
    }
    printf("Error: '%s' not found.\n", target);
    return (head);
}

int main(void) {
    /* Setup dummy list: A -> B -> NULL */
    struct Node* head;
    struct Node* second;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    strcpy(head-> song, "Song A");
    head->next = second;
    strcpy(second->song, "Song B");
    second->next = NULL;

    head = remove_song(head, "Song B");

    return (0);
}