#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

typedef struct {
    Node* head;
    Node* tail;
} Queue;

void init_queue(Queue* q) {
    q->head = NULL;
    q->tail = NULL;
}

void enqueue(Queue* q, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        exit(1); /* Using exit() function because function enqueue is void type */
    }
    new_node->data = data;
    new_node->next = NULL;

    if (q->tail == NULL) { /* If queue is empty */
        q->head = new_node;
        q->tail = new_node;
    } else {
        q->tail->next = new_node;
        q->tail = new_node;
    }
}

int dequeue(Queue* q) {
    if (q->head == NULL) {
        printf("Queue is empty.\n");
        return(-1); /* Error */ cant exit?
    }

    Node* temp = q->head;
    int data = temp->data;

    q->head = q->head->next;
    if (q-> head == NULL) {
        q->tail = NULL;
    }

    free(temp);
    return(data);
}

void print_queue(Queue* q) {
    Node* current = q->head;
    printf("Queue: HEAD -> ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n\n");
}

int main(void) {
    Queue q;
    init_queue(&q);

    printf("Enqueue 10\n");
    enqueue(&q, 10);
    print_queue(&q);

    printf("Enqueue 20\n");
    enqueue(&q, 20);
    print_queue(&q);

    printf("Dequeue %d\n", dequeue(&q));
    print_queue(&q);

    printf("Enqueue 30\n");
    enqueue(&q, 30);
    print_queue(&q);

    printf("Dequeue %d\n", dequeue(&q));
    print_queue(&q);

    printf("Dequeue %d\n", dequeue(&q));
    print_queue(&q);

    return (0);
}