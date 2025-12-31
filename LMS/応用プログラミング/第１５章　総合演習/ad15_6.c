#include <stdio.h>

struct Item {
    char name[20];
    int price;
    int stock;
};

/* Purchase logic */
void buy_item(struct Item items[], int index, int money) {
    /* Check price */
    if (items[index].price > money) {
        printf("Error: Not enough money.\n");
        return;
    }

    /* Check stock */
    if (items[index].stock <= 0) {
        printf("Error: Out of stock.\n");
        return;
    }

    /* Process purchase */
    items[index].stock--;
    printf("Purchased: %s\n", items[index].name);
    printf("Change: %d\n", money - items[index].price);
}

int main(void) {
    struct Item vending_machine[] = {
        {"Water", 100, 5},
        {"Cola", 150, 0},
        {"Tea", 120, 3},
    };

    buy_item(vending_machine, 0, 50); /* Buy Water */

    return (0);
}