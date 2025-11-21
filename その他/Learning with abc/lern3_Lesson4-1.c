#include <stdio.h>

int main(void) {
    
    int repeat;

    do {
        int no;
        printf("Enter a number \n"); scanf("%d", &no);

        if (no == 0) {
            puts("It is 0\n");
        }
        else if (no > 0) {
            puts("It is a positive number.\n");
        }
        else {
            puts("It is a negative number\n");
        }
        printf("Continue? (1 - Yes, 0 - No): \n"); scanf("%d", &repeat);
    } while(repeat);

    return 0;
}
// кста ты 
// CTRL + ] || CTRL +  - сдвинуть влево или вправо

// выгляит сексуалньо