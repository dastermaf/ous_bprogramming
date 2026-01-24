#include "db.h"
#include <stdio.h>
#include <stdlib.h>

void show_player(const unsigned int l_id) {
    Player player;
    if (get_player_by_id(l_id, &player) == 0) {
        printf("====== Player Information ======\n");
        printf("ID:         %u\n", player.id);
        printf("Nickname:   %s\n", player.nickname);
        printf("Balance:    %.2f\n", player.balance);
        printf("Level:      %u\n", player.level);
        printf("Created At: %s\n", player.create_at);
        printf("================================\n");
    } else {
        fprintf(stderr, "Error: Could not retrieve player data\n");
    }
}

int input_player_id() {
    int id;

    puts("Please enter player ID below to see stats of account.");
    puts("Please do not enter the signed (negative) numbers.");
    puts("Enter 0 to exit.\n");

    while (1) {
        printf("Enter your ID: ");
        if (scanf("%d", &id) != 1) {
            while(getchar() != '\n'); // Очистка буфера
            continue;
        }
        if (id == 0) {
            printf("Exiting...\n");
            return 0;
        }
        if (id < 0) {
            printf("Error: ID must be less than 20\n");
            printf("Try again! Or enter 0 to exit.\n");
            continue;
        }

        if (id > 20) {
            printf("Error: ID must be less than 20\n");
            printf("Try again! Or enter 0 to exit.\n");
            continue;
        }
        break;
    }

    printf("Your ID is <%d>\n\n", id);
    return id;
}

void input_show_player() {
    int id = input_player_id();
    show_player(id);
    printf("\n");
}

int main(void) {
    printf("\nStarting system...\n\n");
    db_connect();

    printf("\nSystem started!\n");
    printf("\nWelcome to JSON Chikara!\n\n");

    input_show_player();

    db_disconnect();
    return 0;
}