#include <stdio.h>

int main(void) {
    int scores = {3, 5, 1, 2, 4}; // 初期化場合に限る
    int i;


    for (i = 0; i < 5; i++) {
        printf("Scores [%d]: %d\n", i,  scores[i]);
    }

    return (0);
}
