#include <stdio.h>

void function_c(void) {
    printf("Inside function_c\n");
}

void function_b(void) {
    printf("Inside function_b\n");
    function_c(); // function_b calls function_c
}

void function_a(void) {
    printf("Inside function_a\n");
    function_b(); // function_a calls function_b
}

int main(void) {
    printf("Starting main\n");
    function_a(); // main calls function_a
    printf("Finishing main\n");

    return(0);
}