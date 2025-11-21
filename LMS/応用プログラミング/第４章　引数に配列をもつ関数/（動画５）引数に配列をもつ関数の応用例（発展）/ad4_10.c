#include <stdio.h>

// Function to calculate string length
int my_strlen(char str[]){
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
        return (len);
}

// Function to replace all occurrences of a character with another
void replace_char(char str[], char old_char, char new_char) {
    int i;
    int len = my_strlen(str); // абъясни паже вот это, что именно
    for(i = 0 ; i < len; i++){ // i пробегает по всему массиву, пока его длинна не закончится, ии 
        if (str[i] == old_char) {  // и если текущий символ равен заменяемому символу то заменяет его на новый
            str[i] = new_char; // аок
        }
    }
}

int main(void) {
    char str1[] = "Hello World";
    char str2[] = "programming";
    char str3[] = "apple";

    printf("Original: \"%s\"\n", str1);
    printf("Replace '1' with 'X'\n");
    replace_char(str1, '1', 'X');
    printf("Modified: \"%s\"\n\n", str1);

    printf("Original: \"%s\"\n", str2);
    printf("Replace 'g' with 'Z'\n");
    replace_char(str2, 'q', 'Z');
    printf("Modified: \"%s\"\n\n", str2);

    return(0);
}