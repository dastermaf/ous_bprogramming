#include <stdio.h>

int main(void) {
    int* p;  // Uninitialized pointer (wild pointer)

    /*
     * The following line is extremely dangerous.
     * 'p' holds a garbage address, and writing to it
     * can corrupt memory, crash the program, or cause
     * other unpredictable behavior.
     * This line is commented out to prevent accidental execution.
     */
    // *p = 100;

    printf("Address stored in uninitialized pointer p: %p\n", (void*)p);
    printf(
        "This program demonstrates a wild pointer, but avoids "
        "dereferencing it.\n");

    // Safe way: Initialize pointer to NULL
    /* BLANK */
    printf("Address stored in safe_p: %p\n", /* BLANK */);

    return (0);
}
