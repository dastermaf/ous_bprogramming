#include <stdio.h>

// Function to reverse the elements of an
void reverse_array(int arr[], int size) {
    int start = 0;
    int end = size - 1;
    int temp;
    while (start < end) {
        // Swap elements
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move pointers
        start++;
        end--;
    }
}

// Function to print array elements
void print_array(int arr[], int size) {
    int i;
    for (i = 0 ; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int my_data[] = {10, 20, 30, 40, 50};
    int array_size = 5;

    printf("Original array: ");
    print_array (my_data, array_size);

    reverse_array (my_data, array_size);

    printf("Reversed array: ");
    print_array (my_data, array_size);

    return(0);
}