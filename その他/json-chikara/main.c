// #include "db.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
//
// void show_player(unsigned int table_type, const char *field, const char *value) {
//     Player player;
//     if (find(table_type, field, value, &player) == 0) {
//         printf("====== Player Information ======\n");
//         printf("ID:         %u\n", player.id);
//         printf("Nickname:   %s\n", player.nickname);
//         printf("Balance:    %.2f\n", player.balance);
//         printf("Level:      %u\n", player.level);
//         printf("Created At: %s\n", player.create_at);
//         printf("================================\n");
//     } else {
//         fprintf(stderr, "Error: Could not retrieve player data for %s: %s\n", field, value);
//     }
// }
//
// int input_player_id() {
//     int id;
//     puts("Please enter player ID (0 to exit):");
//     while (1) {
//         printf("Enter your ID: ");
//         if (scanf("%d", &id) != 1) {
//             while(getchar() != '\n'){}
//             continue;
//         }
//         if (id < 0 || id > 20) {
//             printf("Error: Invalid ID range. Try again.\n");
//             continue;
//         }
//         break;
//     }
//     return id;
// }
//
// void show_menu() {
//     unsigned int selected_option;
//     char input_buffer[64];
//
//     printf("1. Show player stats by ID\n");
//     printf("2. Show player stats by nickname\n");
//     printf("Select one of these (1-2): ");
//
//     if (scanf("%u", &selected_option) != 1) {
//         while(getchar() != '\n'){}
//         return;
//     }
//
//     switch (selected_option) {
//         case 1: {
//             int id = input_player_id();
//             if (id != 0) {
//                 snprintf(input_buffer, sizeof(input_buffer), "%d", id);
//                 show_player(1, "id", input_buffer);
//             }
//             break;
//         }
//         case 2: {
//             printf("Enter nickname: ");
//             scanf("%63s", input_buffer);
//             show_player(1, "nickname", input_buffer);
//             break;
//         }
//         default:
//             printf("Invalid option selected.\n");
//             break;
//     }
// }
//
// int main(void) {
//     printf("Starting system...\n");
//     if (db_connect() != 0) {
//         return 1;
//     }
//
//     printf("System started! Welcome to JSON Chikara!\n\n");
//
//     show_menu();
//
//     db_disconnect();
//     return 0;
// }