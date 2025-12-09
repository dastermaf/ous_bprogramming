#include <stdio.h>

int main(void) {
    int a;
    double b;
    char s[20];

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a real number: ");
    scanf("%lf", &b);

    printf("Enter a string: ");
    scanf("%s", s); // 先頭要素のアドレスを指しているので&s[0]もsも同じ意味となります。

    printf("Entered values:\n");
    printf("Integer: %d\n", a);
    printf("Real number: %f\n", b);
    printf("String: %s\n", s);

    return (0);
}