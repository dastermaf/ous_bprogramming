#include <stdio.h>

int main(void) {
    double chance_of_rain, threshold = 50.0;

    printf("Enter the chance of rain (in percentage): ");
    scanf("%lf", &chance_of_rain);
    if (chance_of_rain < 0) {
        printf("Error: The chance of rain must be a positive number.\n");
    } else if (chance_of_rain > 100) {
        printf("Error: The chance of rain must not exceed 100 percent.\n");
    } else {
        if (threshold <= chance_of_rain) {
            if (chance_of_rain >= 70.0) {
                printf("Definitely bring an umbrella!\n");
            } else {
                printf("Bring a folding umbrella.\n");
            }
        } else {
            if (chance_of_rain >= 30.0) {
                printf("Bring a hat or a folding umbrella.\n");
            } else {
                printf("Don't forget your sunglasses and a hat.\n");
            }
        }
    }

    return (0);
    }