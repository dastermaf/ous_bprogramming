#include <stdio.h>

int main(void) {
    int input_pin;
    int correct_pin = 1234; // Example correct PIN

    printf("Enter the PIN: ");
    scanf("%d", &input_pin);

    if (input_pin == correct_pin) {
        printf("PIN is correct. Access granted.\n");
    } else {
        printf("PIN is incorrect. Access denied.\n");
    }

    return 0;
}