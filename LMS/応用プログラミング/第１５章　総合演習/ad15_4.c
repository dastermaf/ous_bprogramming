#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
    char song[50];
    struct Node* next;
};

/* Add new song to list (check duplication) */
struct Node* add_song(struct Node* head, char* new_song) {
    struct Node* p = head;
    struct Node* new_node;

    /* Check for duplication */
    while (p != NULL) {
        if (strcmp(p->song, new_song) == 0) {
            printf("Error '%s' is already exists.\n", new_song);
            return (head);
        }
        p = p->next;
    }

    /* Create new node */
    new_node = (struct Node*)malloc(sizeof(struct Node));
    strcpy(new_node->song, new_song);
    new_node->next = head; /* Add to front */

    printf("Added: '%s'\n", new_song);
    return (new_node);
}

int main(void) {
    struct Node* playlist = NULL;

    playlist = add_song(playlist, "Song A");
    playlist = add_song(playlist, "Song B");
    playlist = add_song(playlist, "Song A"); /* Duplicate */

    return (0);
}