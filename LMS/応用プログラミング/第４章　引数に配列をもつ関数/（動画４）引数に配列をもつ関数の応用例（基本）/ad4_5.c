#include <stdio.h>

// Function to search for an element in an array (linear search)
int linear_search(int arr[], int size, int target) {
    int i;
    for (i = 0 ; i < size; i++) {
        if (arr[i] == target) {
            return (i); // Return the index if found
        }
    }
    return(-1); // Return -1 if not found
}

int main(void) {
    int my_data[] = {10, 20, 30, 40, 50};
    int array_size = 5;
    int target1 = 30;
    int target2 = 99;

    int index1 = linear_search (my_data, array_size, target1);
    if (index1 != -1) {
        printf("Element %d found at index: %d\n", target1, index1);
    } else {
        printf("Element %d not found.\n", target1);
    }
        return(0);
}