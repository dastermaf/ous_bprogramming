#include <stdio.h>

/*
 * Node structure for self-referential structure
 */
typedef struct node {
    int data;           // Data member
    struct node* next;  // Pointer to the next node
} Node;

int main (void) {
    Node n1, n2;

    // Set data for each node
    n1.data = 10;
    n2.data = 20;

    // Link nodes
    n1.next = &n2;
    n2.next = NULL;

    // Print data using pointers
    printf("n1.data: %d\n", n1.data);
    printf("n1.next->data: %d\n", n1.next->data);

    return (0);
}