#include <stdio.h>

int main(void) {
    double chance_of_rain, threshold = 50.0;

    printf("Enter the chance of rain (in percentage): ");
    scanf("%lf", &chance_of_rain);

    if (threshold <= chance_of_rain) {
        printf("It's likely to rain. Bring an umbrella!\n");
    }

    return (0);
}