#include <stdio.h>

int main(void) {
    char str[100];
    int len = 0;

    printf("Enter a string:");
    scanf("%s", str);

    // Calculate the length of the string using
    while (str[len] != '\0'){
        len++;
        }
    printf("Length of the string: %d\n", len);

    return(0);
}