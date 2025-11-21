#include <stdio.h>

// Define Date structure
typedef struct date {
    int year;
    int month;
    int day;
} Date;

// Define Address structure
typedef struct address {
    char prefecture[20];
    char city[20];
    char street[50];
} Address;

// Define Person structure with nested Date and Address
/* BLANK */

int main(void) {
    // Initialize a Person structure
    /* BLANK */;

    // Access and print members of the nested structures
    printf("Name: %s\n", ridai.name);
    printf("Birthdate: %d/%d/%d\n", ridai.birthdate.year, ridai.birthdate.month, /* BLANK */);
    printf("Address: %s, %s, %s\n", /* BLANK */, ridai.address.city, ridai.address.street);

    return (0);
}
