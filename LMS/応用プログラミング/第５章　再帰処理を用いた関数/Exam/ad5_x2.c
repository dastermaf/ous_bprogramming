#include <stdio.h>

// Function to compute permutation (nPr) using recursion
//n: total number of items
//r: number of items to choose
int permutation(int n, int r) {
    if (r == 0) {
        return 1;
    }
    if (n >= r && r > 0) {
        return n * permutation(n - 1, r - 1);
    }
    return (0);
}

int main(void) {
    int n, r;
    printf("Enter n and r for nPr: ");
    scanf("%d %d", &n, &r);
    printf("%d%d %d\n", n, r, permutation(n,r));
    return(0);
}