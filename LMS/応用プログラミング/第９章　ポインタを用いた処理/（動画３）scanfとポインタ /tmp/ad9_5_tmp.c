#include <stdio.h>

int main(void) {
    int a;
    double b;
    char s[20];

    printf("Enter an integer: ");
    scanf("%d", /* BLANK */);

    printf("Enter a real number: ");
    scanf("%lf", /* BLANK */);

    printf("Enter a string: ");
    scanf("%s", /* BLANK */);

    printf("Entered values:\n");
    printf("Integer: %d\n", a);
    printf("Real number: %f\n", b);
    printf("String: %s\n", s);

    return (0);
}
