#include <stdio.h>
#include <stdlib.h>

/* Node stucture definition */
typedef struct node {
    int data;
    struct node* next;
} Node;

Node* add_to_head(Node* head, int data) {
    Node* new_node;

    new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }

    new_node->data = data;
    new_node->next = head; /* Head node points to the old head */

    return(new_node); /* New node becomes the new head */
}

void print_list(Node* head) {
    Node* current = head;

    printf("List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n\n");
}

void free_list(Node* head) {
    Node* current = head;
    Node* next_node;

    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
}

int main(void) {
    Node* head = NULL;

    printf("Adding 30 to the head.\n");
    head = add_to_head(head, 30);
    print_list(head);

    printf("Adding 20 to the head.\n");
    head = add_to_head(head, 20);
    print_list(head);

    printf("Adding 10 to the head.\n");
    head = add_to_head(head, 10);
    print_list(head);

    free_list(head);
    head = NULL;

    return(0);
}