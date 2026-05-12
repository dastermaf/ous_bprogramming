#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define ACROPOLIS "\033[38;2;215;175;95m"

void greeting(void) {
    printf(ACROPOLIS "アクロポリス" RESET "へようこそ。\n");
}

int main(void) {
    greeting();
    return 0;
}