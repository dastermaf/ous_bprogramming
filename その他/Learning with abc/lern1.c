#include <stdio.h>

int main() {
    int day, check;
    printf("Input day: "); scanf("%d", &day);

    
    switch(day) {
        case 1: puts("Воскресенье");  break;
        case 2: puts("Понидельник"); break;
        case 3: puts("Вторник"); break;
        case 4: puts("Среда"); break;
        case 5: puts("Четверг"); break;
        case 6: puts("Пятница"); break;
        case 7: puts("Суббота"); break;
    }

    printf("Чекнуть погоду? (1 - Да, 0 - Нет): "); scanf("%d", &check);
    switch(check){
        case 1: {
            float waterpercent, badweatherpercent = 50.0;
            printf("Напиши процент влажности: "); scanf("%f", &waterpercent);

            (waterpercent >= badweatherpercent) ? printf("Захвати зонт\n") : printf("Всё окей братанчик\n"); 
            break;
        }
        case 0: puts("Ну и ладно"); break;
    }
    
    return 0;
}