#include <stdio.h>

#define NUM 5

// Function to print an array
void print_array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

// Function to sort an integer array using bubble sort
void sort_int_array(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    // Declare and initialize an integer array
    int numbers[] = {5, 1, 4, 2, 8};

    printf("Before sorting:\n");
    print_array(numbers, NUM);

    sort_int_array(numbers, NUM);

    printf("After sorting:\n");
    print_array(numbers, NUM);

    return (0);
}