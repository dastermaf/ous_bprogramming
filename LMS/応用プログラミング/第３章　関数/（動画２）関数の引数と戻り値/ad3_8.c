#include <stdio.h>

// Function with arguments and no return value
void print_number(int num) {
    printf("The number is: %d\n", num);
}

int main(void) {
    print_number(100); // Call the function with an argument
    return(0);
}