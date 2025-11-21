#include <stdio.h>

// Function to find the minimum element in an array
int find_min(int arr[], int size) {
    int i;
    int min = arr[0]; // Assume the first element is the minimum
    for (i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min if a smaller element is found
        }
    }
    return(min);
}

int main(void) {
    int my_data[] = {50, 10, 40, 20, 30};
    int array_size = 5;
    int min_element = find_min(my_data, array_size);
    printf("Minimum element: %d\n", min_element);

    return(0);
}