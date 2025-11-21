// Function to calculate the sum of a double array

#include <stdio.h>

double sum_double_array (double arr[], int size) {
    int i;
    double total = 0.0;

    for (i = 0; i < size; i++) {
        total += arr[i];
        return (total);
    }
}

int main(void) {
    double my_data[] = {10.5, 20.0, 30.0, 40.0, 50.0};
    int array_size = 5;
    double result = sum_double_array(my_data, array_size);
    printf("Sum of array elements: %f\n", result);

    return (0);
}