#include <stdio.h>

// Function with no arguments and a return value
int get_fixed_value(void) {
    return (42); // Returns a fixed integer value
}

int main(void) {
    int result;

    // Call the function and store its return value
    result = get_fixed_value();

    printf("The fixed value is: %d\n", result);
    return(0);
}