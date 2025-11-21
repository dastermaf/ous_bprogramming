#include <stdio.h>

int main(void) {
    // Declare a 3x4 integer array
    int data[3][4]; // 3 rows, 4 columns
    int i, j;

    // Initialize the array using nested loops
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            data[i][j] = i * 10 + j;
        }
    }

    printf("  |   0   1   2   3 \n");
    printf("--+---------------- \n");
    // Print the array elements using nested loops in a table format
    for (i = 0; i < 3; i++) { //
        printf("%d | ", i);
        for (j = 0; j < 4; j++) { // Inner loop for columns
            printf("%3d ", data[i][j]);
        }
        printf("\n"); // Move to the next line after printing a row
    }


    return 0;
}