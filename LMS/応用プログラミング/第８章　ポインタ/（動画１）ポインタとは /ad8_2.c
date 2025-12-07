#include <stdio.h>

int main(void) {
    int num = 0x41424344; /* 'ABCD' in ASCII */
    int* p_int;
    char* p_char;

    p_int = &num;
    p_char = (char*)&num;

    printf("=== Access with int* ===\n");
    printf("Address: %p\n", (void*)p_int);
    printf("Value (hex): %x\n", *p_int);
    printf("Value (char): %c\n", (char)*p_int); /* Only the last byte is taken */

    printf("\n=== Access with char* ===\n");
    printf("Address: %p, Value: %c\n", (void*)p_char, *p_char);
    printf("Address: %p, Value: %c\n", (void*)(p_char + 1), *(p_char + 1));
    printf("Address: %p, Value: %c\n", (void*)(p_char + 2), *(p_char + 2));
    printf("Address: %p, Value: %c\n", (void*)(p_char + 3), *(p_char + 3));

    return (0);
}