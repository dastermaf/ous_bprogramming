// スコープ

#include <stdio.h>

int global_var = 100; // Global variable

void my_function(void) {
    int local_var = 20; // Local variable in my_function
    printf("In my_function:\n");
    printf("local_var = %d\n", local_var);
    printf("global_var = %d\n", global_var);
}

int main(void) {
    int local_var = 10; // Local variable in main
    printf("In main:\n");
    printf("local_var = %d\n", local_var);
    printf("global_var = %d\n", global_var);

    my_function();

    printf("After my_function:\n");
    printf("local_var = %d\n", local_var);
    printf("global_var = %d\n", global_var);

    return(0);
}