#include <stdio.h>

int main(void) {
    int* p;  // Uninitialized pointer (wild pointer)

    /*
     * The following line is extremely dangerous.
     * 'p' holds a garbage address, and writing to it
     * can corrupt memory, crash the program, or cause
     * other unpredictable behavior.
     */

    printf("Address stored in uninitialized pointer p: %p\n", (void*)p); // здесь будет 0x1ja3wi4gj2awgo что то такое мусорный адрес

    printf(
        "This program demonstrates a wild pointer, but avoids "
        "dereferencing it.\n");

    // Safe way: Initialize pointer to NULL

    int* safe_p = NULL;

    printf("Address stored in safe_p: %p\n", safe_p);

    return (0);
}