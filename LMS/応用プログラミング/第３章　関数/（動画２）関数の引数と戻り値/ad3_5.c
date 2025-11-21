#include <stdio.h>

// Function to modify a value (call by value)
void modify_value(int num) {
    printf("Inside function: %d\n", num);
    num *= 2; // Modify the local copy of num
    printf("Inside function: %d\n", num);
}

int main(void) {
    int x = 10; // 呼び出し元の変数の値は変わらない
    printf("Inside main: %d\n", x);
    modify_value (x); // Pass the value of x to the function
    printf("Inside main: %d\n",x);

    return(0);
}