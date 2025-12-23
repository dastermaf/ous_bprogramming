#include <stdio.h>
/* BLANK */

int main(void) {
    int i;
    int num;
    /* BLANK */

    printf("Enter the number of integers: ");
    scanf("%d", &num);

    /* Allocate memory for num integers */
    /* BLANK */

    /* Check if malloc was successful */
    if (/* BLANK */) {
        printf("Failed to allocate memory.\n");
        return (1);
    }

    /* Read integers from the user */
    for (i = 0; i < num; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", /* BLANK */);
    }

    /* Print the integers */
    printf("You entered: ");
    for (i = 0; i < num; i++) {
        printf("%d ", /* BLANK */);
    }
    printf("\n");

    /* Free the allocated memory */
    /* BLANK */

    return (0);
}
