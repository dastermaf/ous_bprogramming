#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next; /* Указатель на СЛЕДУЮЩИЙ узел (хранит адрес следующего дома) */
} Node;

typedef struct {
    Node* head; /* Это ТОЛЬКО 8 байт для адреса. Внутри head НЕТ поля data. */
    Node* tail; /* Это ТОЛЬКО 8 байт для адреса. Внутри tail НЕТ поля data. */
    /* ВАЖНО: head и tail - это просто адреса. Сами данные лежат в malloc-памяти */
} Queue;

void init_queue(Queue* q) { /* Initialization function with arguments (Queue type pointer "q") (head, and tail nods) */
    q->head = NULL; /* Access with ドット演算子 are equal to q->head (ポインタだから'->'を使えるようになっている) - NULLING*/
    q->tail = NULL; /* q.tail - NULLING*/
    /* ただの安全のための初期化 */
}

void enqueue(Queue* q, int data) { /* Initialization function, Queue型のポインタ「ｑ」を宣言（頭とおしりがあるやつを仮引数として求める）、インと型の「data」を求める */
    Node* new_node = (Node*)malloc(sizeof(Node)); /* Creating "Malloc" space to store new_node with type Node (int data and struct node* next) */
    if (new_node == NULL) { /* Exit if malloc fails */
        exit(1); /* Using exit() function because function enqueue is void type */
    }


    new_node->data = data; /* Мы физически записываем число data ПРЯМО В ПАМЯТЬ, которую выделил malloc. */
    new_node->next = NULL; /* И записываем NULL в поле next той же самой памяти. */

    if (q->tail == NULL) { /* If queue is empty */
        q->head = new_node; /* Теперь q->head хранит ТОТ ЖЕ адрес, что и new_node. Они оба указывают на один и тот же malloc-блок. */
        q->tail = new_node;
    } else {
        q->tail->next = new_node; /* Берем ТЕКУЩИЙ последний узел (на него указывает tail) и в его поле next записываем адрес НОВОГО узла. Сцепляем вагоны. */
        q->tail = new_node;       /* Перемещаем указатель tail на новый узел, так как теперь ОН является последним. */
    }

    /*
    Structor of queue()
    +-------+
    | head  |---------------------> [Node 1] -> [Node 2] -> [Node 3] -> NULL
    +-------+                                                  ^
    | tail  |--------------------------------------------------|
    +-------+
 */
}

int dequeue(Queue* q) {
    if (q->head == NULL) {
        printf("Queue is empty.\n");
        return(-1); /* Error */
    }

    Node* temp = q->head; /* Сохраняем адрес первого узла во временную переменную. Если мы сразу сдвинем head, мы потеряем адрес первого узла и не сможем сделать free. */
    int data = temp->data; /* Спасаем данные перед удалением */

    q->head = q->head->next; /* Сдвигаем голову: теперь первым становится второй элемент. */
    if (q->head == NULL) {
        q->tail = NULL; /* Если очередь стала пустой, нужно обнулить и хвост. Иначе tail будет указывать на память, которую мы сейчас удалим (free). */
    }

    free(temp); /* Физически удаляем старый первый узел из памяти. */
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