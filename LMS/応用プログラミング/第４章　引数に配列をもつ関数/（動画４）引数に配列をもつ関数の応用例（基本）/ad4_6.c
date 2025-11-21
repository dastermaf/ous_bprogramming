#include <stdio.h>

// Function to find the maximum element in an array
int find_max(int arr[], int size) {
    int i;
    int max = arr[0]; // Assume the first element is the maximum
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }
    return (max);
}

int main(void) {
    int my_data[] = {10, 50, 20, 40, 30};
    int array_size = 5;
    int max_element = find_max(my_data, array_size);
    printf("Maximum element: %d\n", max_element);

    return(0);
}