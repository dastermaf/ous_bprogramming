#include <stdio.h>

int main(void) {
    int i, j; // Loop variables for row and column indices
    // Declare a 2x33 integer array
    // Initialize the array elements using nested braces
    int matrix[2][3] = {{10, 15, 25}, {3, 6}}; // 2 rows, 3 columns

    // Print the array elements using nested loops
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("matrix[%d][%d]: %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}