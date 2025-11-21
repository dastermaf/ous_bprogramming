#include <stdio.h>

int main(void) {
    int scores[5] = {2, 3, 5, 1, 6};
    int i;


    for (i = 0; i < 5; i++) {
        printf("Scores [%d]: %d\n", i,  scores[i]);
    }

    return (0);
}
