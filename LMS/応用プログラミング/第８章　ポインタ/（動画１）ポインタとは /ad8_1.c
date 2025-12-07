#include <stdio.h>

int main(void) {
    int a;
    int* p;

    a = 10;
    p = &a;

    printf("a_val = %d, a_adr = %p\n", a, &a);
    printf("p_val = %p, p_ref = %d\n", p, *p);

    printf("After assigning 20 to *p... \n");
    *p = 20;

    printf("a_val = %d, a_adr = %p\n", a, &a);
    printf("p_val = %p, p_ref = %d\n", p, *p);

    return (0);
}