#define STUDENTS 5

#include <stdio.h>

int students[STUDENTS];
int arr[STUDENTS];

int main(void){

    for(int i = 0; i < STUDENTS; i++) {
        printf("Type score for student %d:", i);
        scanf("%d", &students[i] );
    };
    
    int sum = 0;
    
    for(int i = 0; i < STUDENTS; i++) {
        sum += students[i];
    }

    printf("Sum of scores: %d", sum);

    return 0;
} 