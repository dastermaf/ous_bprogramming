#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

Node* add_to_head(Node* head, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        exit(1);
    }
    new_node->data = data;
    new_node->next = head;
    return (new_node);
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

Node* search_node(Node* head, int key) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return (current);
        }
        current = current->next;
    }
    return (NULL); /* Not found */
}

Node* delete_node(Node* head, int key) {
    Node* current = head;
    Node* prev = NULL;

    /* Find the node to delete */
    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }

    /* If node was not found */
    if (current == NULL) {
        return (head);
    }

    /* If the node to delete is the head node */
    if (prev == NULL) {
        head = current->next;
    } else {
        /* Unlink the node from the list */
        prev-> next = current->next;
    }

    free(current); /* Free the memory */
    return(head);
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
    Node* found = NULL;

    head = add_to_head(head, 30);
    head = add_to_head(head, 20);
    head = add_to_head(head, 10);
    printf("Initial list:\n");
    print_list(head);

    printf("Searching for 20...\n");
    found = search_node(head, 20);
    if (found != NULL) {
        printf("Found node with data %d\n", found->data);
    } else {
        printf("Node not found.\n\n");
    }

    printf("Deleting node with data 20...\n");
    head = delete_node(head, 20);
    print_list(head);

    printf("Deleting node with data 10 (head)...\n");
    head = delete_node(head, 10);
    print_list(head);

    free_list(head);
    head = NULL;

    return (0);
}