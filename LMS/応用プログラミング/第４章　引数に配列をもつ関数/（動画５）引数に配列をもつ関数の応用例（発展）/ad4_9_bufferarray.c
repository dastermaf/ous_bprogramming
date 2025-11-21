#include <stdio.h>

// Function to check if a character is whitespace
int is_whitespace_char(char c) {
    switch(c) {
        case ' ' :
        case '\t':
        case '\n':
        case '\r':
        case '\f':
        case '\v':
            return (1);
        default:
            return(0);
    }
}

// Function to calculate string length
int my_strlen(char str[]){
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return (len);
}

// Function to trim leading and trailing whitespace from a string
void trim_whitespace_with_buffer(char str[]) {
    int len = my_strlen(str);
    int start = 0;
    int end = len - 1;
    int i;
    int j = 0;

    while(is_whitespace_char(str[start])){
        start++;
    }
    while (end >= start && is_whitespace_char(str[end])) {
        end--;
    }

    char temp[len + 1];
    for (i = start; i <= end; i++) {
        temp[j] = str[i];
        j++;
    }
    temp[j] = '\0';

    for (i = 0; i <= j; i++) {
        str[i] = temp[i];
    }
}


// Function to trim leading and trailing whitespace from a string
void trim_whitespace (char str[]) {
    int len = my_strlen(str);
    int start = 0;
    int end = len - 1;
    int i;

    // Trim leading whitespace
    while(is_whitespace_char(str[start])){
        start++;
    }

    // Trim trailing whitespace
    while (end >= start && is_whitespace_char(str[end])) {
        end--;
    }

    // Shift characters to the beginning
    for (i = start; i<= end; i++) {
        str[i - start] = str[i];
    }
    str[i - start] = '\0'; // Null-terminate the new string
}

int main(void) {
    char str1[]="  Hello World  ";
    char str2[]= "\t\tTrim Me\n\n";
    char str3 []= "NoTrim";
    printf("Original: \"%s\"\n", str1);
    trim_whitespace (str1);
    printf("Trimmed:\"%s\"\n\n", str1);

    printf("Original: \"%s\"\n", str2);
    trim_whitespace (str2);
    printf("Trimmed:\"%s\"\n\n", str2);

    printf("Original: \"%s\"\n", str3);
    trim_whitespace (str3);
    printf("Trimmed:\"%s\"\n\n", str3);

    return(0);
}