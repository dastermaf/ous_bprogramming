#include <stdio.h>

// Function definition
void greet(void) { // viodの場合、戻り値なし
    printf("Hello, World!\n");
}

int main (void) { // intの場合、戻り値あり
    // Function call
    greet();

    return (0); // 値を戻ります
}