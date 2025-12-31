#include <stdio.h>

struct Book {
    int id;
    char title[100];
    int  is_borrowed;
};

/* Checkout a book using pointer */
void checkout_book(struct Book* book) {
    if (book->is_borrowed == 1) {
        printf("Error: '%s' is already borrowed.\n", book->title);
    } else {
        book->is_borrowed = 1;
        printf("Success: '%s' is checked out.\n", book->title);
    }
}

int main(void) {
    struct Book my_book = {101, "C Programming", 0};

    printf("Status: %d\n", my_book.is_borrowed);
    checkout_book(&my_book);
    printf("Status: %d\n", my_book.is_borrowed);
    checkout_book(&my_book);

    return (0);
}