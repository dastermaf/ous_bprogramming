#include <stdio.h>

int main() {
    int no;

    printf("Print positive number: ");
    scanf("%d", &no);

    while (no >= 0) {
        printf("%d ", no);
        no--;
    }
    printf("\n");
    
}