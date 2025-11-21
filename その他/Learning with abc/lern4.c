#include <stdio.h>

int main(void) {
    
    char repeat;

    do {
        int no;
        printf("Enter a number:"); scanf("%d", &no);

        if (no == 0) {
            puts("It is 0\n");
        }
        else if (no > 0) {
            puts("It is a positive number.\n");
        }
        else {
            puts("It is a negative number\n");
        }
        printf("Again? (Y/N): "); scanf(" %c", &repeat); // копилот сказал что нужно пробел до %c // ща спрошу почему
    } while(repeat == 'Y');

    return 0;
} // попробуй еще раз крашнется ли


// Пробел перед %c в " %c" нужен потому, что функция scanf при чтении символа (%c) не пропускает пробельные символы (пробелы, табуляции, переводы строки). После ввода числа (scanf("%d", &no);) в буфере остаётся символ новой строки (\n), который пользователь нажал после числа. Если написать просто scanf("%c", &repeat);, то этот \n сразу попадёт в переменную repeat, и программа не дождётся нового ввода.
// лол как я не додумался, 

// kruto!

// круто! че дальше делать будем?

// go next aaa practice davai!