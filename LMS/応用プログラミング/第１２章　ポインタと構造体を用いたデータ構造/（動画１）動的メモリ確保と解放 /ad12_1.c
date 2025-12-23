#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;
    int num;
    int* ptr;

    printf("Enter the number of integers: ");
    scanf("%d", &num);

    /* Allocate memory for num integers */
    ptr = (int*)malloc(sizeof(int) * num);

    /* Check if malloc was successful */
    if (ptr == NULL) {
        printf("Failed to allocate memory.\n");
        return (1);
    }

    /* Read integers from the user */
    for (i = 0; i < num; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    /* Print the integers */
    printf("You entered: ");
    for (i = 0; i < num; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    /* Free the allocated memory */
    free(ptr);

    return (0);
}