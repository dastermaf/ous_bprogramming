#include <stdio.h>

// Function to get input from the user
int get_number(void) {
    int num;
    scanf("%d", &num);
    return (num);
}

// Function to calculate sum
int calculate_sum(int num1, int num2){
    return (num1 + num2);
}

// Function to display output
void display_output(int sum) {
    printf("Sum: %d\n", sum);
    return;
}
int main(void) {
    int num1, num2;
    int sum;

    printf("Enter first number: ");
    num1 = get_number();
    printf("Enter second number: ");
    num2 = get_number();

    sum = calculate_sum(num1, num2);

    display_output(sum);

    return (0);
}