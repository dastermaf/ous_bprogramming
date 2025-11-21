#include <stdio.h>

// Function to calculate the sum of an array (pointer-form)
int sum_array_ptr(int *arr, int size) {
    int i, total = 0;
    for (i = 0; i < size; i++) {
        total += arr[i];
        return (total);
    }
}

int main(void) {
    int my_data[] = {10, 20, 30, 40, 50};
    int array_size = 5;
    int result = sum_array_ptr(my_data, array_size);

    printf("Sum: %d\n", result);

    return (0);
}