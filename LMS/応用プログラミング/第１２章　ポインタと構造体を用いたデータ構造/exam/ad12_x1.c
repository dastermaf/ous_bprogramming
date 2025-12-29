#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

/* Function to add a new node to the head of the list */
Node* add_to_head(Node* head, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        exit(1);
    }
    new_node->data = data;
    new_node->next = head;
    return(new_node);
}

/* Function to count the number of nodes in a list */
int count_nodes(Node* head) {
    int count = 0;




    }

}

/* Function to free all nodes of a list */
void free_list(Node* heada) {
    Node* current = head;
    Node* temp;
    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }
}

int main(void) {
    Node* head = NULL;
    int node_count = 0;

    head = add_to_head(head,30);
    head = add_to_head(head,20);
    head = add_to_head(head,10);

    node_count = count_nodes(head);
    printf("Number of nodes: %d\n", node_count);

    free_list(head);

    return(0);
}