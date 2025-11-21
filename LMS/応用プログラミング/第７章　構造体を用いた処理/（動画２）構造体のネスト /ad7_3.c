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
typedef struct person {
    char name[6];
    Date birthdate;
    Address address;
} Person;

int main(void) {
    // Initialize a Person structure
    Person ridai = {
        "理大",
        {2000, 1, 1},
        {"岡山県",
            "岡山街",
            "192-41"}};

    // Access and print members of the nested structures
    printf("Name: %s\n", ridai.name);
    printf("Birthdate: %d/%d/%d\n", ridai.birthdate.year, ridai.birthdate.month, ridai.birthdate.day);
    printf("Address: %s, %s, %s\n", ridai.address.prefecture, ridai.address.city, ridai.address.street);

    return (0);
}
