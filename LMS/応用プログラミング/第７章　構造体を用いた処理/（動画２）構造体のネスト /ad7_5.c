#include <stdio.h>
#include <string.h>

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

// Function to print Person information (from
// advanced_programming_07_04_nested_struct_pass_by_value.c)
void print_person_info(Person p) {
    printf("Name: %s\n", p.name);
    printf("Birthdate: %d/%d/%d\n", p.birthdate.year, p.birthdate.month, p.birthdate.day);
    printf("Address: %s, %s, %s\n", p.address.prefecture, p.address.city, p.address.street);
}

// Function to create a Person structure
Person create_person(char name[], int year, int month, int day, char prefecture[], char city[], char street[]) {
    Person p;
    strcpy(p.name, name);
    p.birthdate.year = year;
    p.birthdate.month = month;
    p.birthdate.day = day;
    strcpy(p.address.prefecture, prefecture);
    strcpy(p.address.city, city);
    strcpy(p.address.street, street);
    return (p);
}

int main(void) {
    // Create a Person structure using the function
    Person ridai = create_person("Ridai", 2000, 1, 1, "Okayama","Okayama-shi Kita-ku", "Ridaicho 1-1");

    // Access and print members of the nested structures using
    // print_person_info
    print_person_info(ridai);

    return (0);
}
