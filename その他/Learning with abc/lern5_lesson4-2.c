#include <stdio.h>

int main() {
    int n1, n2;

    puts("Input two numbers.");
    printf("Input A: "); scanf("%d", &n1); 
    printf("Input B: "); scanf("%d", &n2);

    int min = n1 < n2 ? n1 : n2;
    int max = n1 > n2 ? n1 : n2;

    int i = min;
    int sum = 0;
    
    while(i <= max) { //хмммм а чо реально 990 выйдеи? по моему он не включительно 
        sum += i; // а чо ты изменил хмммммм вроде понял
        i++;
    }

    printf("Sum of %d-%d = %d\n", min, max, sum);

    return 0;
}

// go next? там будет посложнее
// похуй
// а чо всё? ебать быстро
// ну а типо да























