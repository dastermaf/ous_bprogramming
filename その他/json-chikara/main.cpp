#include <iostream>
#include "db.h"

using namespace std;

int start() {
    cout << "Starting system...\n";
    if (!db_connect()) {
        cout << "System started!\n\n";
        return 0;
    }
    cout << "\nFiled to start system!\n";
    return 1;
}

int stop() {
    cout << "\n\nSystem stopping...\n";
    if (!db_disconnect()) {
        cout << "System stopped!\n";
        return 0;
    }
    cout << "\nFiled to stop system!\n";
    return 1;
}

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

class PlayerAccount {
private:
    Player data;
    bool loaded = false;
public:
    PlayerAccount(): data{}, loaded(false) {};

    bool fetch(const string &field, const string &value) {
        if (find(1, field.c_str(), value.c_str(), &data) == 0) {
            loaded = true;
            return true;
        } else {
            cout << "Player data not loaded." << endl;
            loaded = false;
            return false;
        }
    };

    void print() const {
        cout << "====== Player Information ======\n";
        cout << "ID:         " << data.id << endl;
        cout << "Nickname:   " << data.nickname << endl;
        cout << "Balance:    " << data.balance << endl;
        cout << "Level:      " << data.level << endl;
        cout << "Created At: " << data.create_at << endl;
        cout << "================================\n";
    }
};



int main() {
    start();

    cout << "WELCOME TO JSON CHIKARA!\n\n";


    stop();
    return 0;
}