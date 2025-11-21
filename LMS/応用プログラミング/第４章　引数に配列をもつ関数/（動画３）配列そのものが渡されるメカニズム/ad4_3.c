#include <stdio.h>

void modify_array(int arr[]) {
    arr[0] = 100; // Modify the first element of the array
}

void print_array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n");
}

int main(void) {
    int my_array [3] = {10, 20, 30};

    printf("Original array: ");
    print_array (my_array, 3);

    modify_array(my_array);

    printf("Modified array: ");
    print_array(my_array, 3);

    return(0);
}