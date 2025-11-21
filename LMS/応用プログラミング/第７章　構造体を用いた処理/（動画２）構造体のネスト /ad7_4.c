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
    char name[50];
    Date birthdate;
    Address address;
} Person;

// Function to print Person information
void print_person_info(Person p) {
    printf("Name: %s\n", p.name);
    printf("Birthdate: %d/%d/%d\n", p.birthdate.year, p.birthdate.month, p.birthdate.day);
    printf("Address: %s, %s, %s\n", p.address.prefecture, p.address.city, p.address.street);
}

int main(void) {
    // Initialize a Person structure
    Person ridai = {.name = "Ridai",
                    .birthdate = {.year = 2000, .month = 1, .day = 1},
                    .address = {.prefecture = "Okayama",
                                .city = "Okayama-shi Kita-ku",
                                .street = "Ridaicho 1-1"}};

    print_person_info(ridai);

    return (0);
}
