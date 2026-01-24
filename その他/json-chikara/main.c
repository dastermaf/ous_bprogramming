#include "db.h"
#include <stdio.h>

int main(void) {
    db_connect();

    Player player;

    if (get_player(1, &player) == 0) {
        printf("=== Player Information ===\n");
        printf("ID:         %u\n", player.id);
        printf("Nickname:   %s\n", player.nickname);
        printf("Balance:    %.2f\n", player.balance);
        printf("Level:      %u\n", player.level);
        printf("Created At: %s\n", player.create_at);
        printf("==========================\n");
    } else {
        fprintf(stderr, "Error: Could not retrieve player data\n");
    }

    db_disconnect();
    return 0;
}