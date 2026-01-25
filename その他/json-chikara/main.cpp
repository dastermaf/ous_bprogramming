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

void clear() {
    cin.clear();
    cin.ignore(10000, '\n');
}

class PlayerAccount {
    Player data;
    bool loaded = false;
public:
    PlayerAccount(): data{}, loaded(false) {};

    bool fetch(const string &field, const string &value) {
        if (find(1, field.c_str(), value.c_str(), &data) == 0) {
            loaded = true;
            return true;
        }

        cout << "Player data not loaded." << endl;
        loaded = false;
        return false;
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

    bool input(const unsigned int column = 1) {
        string type;
        string prompt;

        switch (column) {
            case 2:
                type = "nickname";
                prompt = "Enter player nickname: ";
                break;
            case 1:
            default:
                type = "id";
                prompt = "Enter player ID (1-20): ";
                break;
        }

        string user_input;

        while (true) {
            cout << prompt;
            cin >> user_input;

            if (column == 1) {
                unsigned int temp_id = 0;
                if (!omoi(&temp_id, user_input.c_str())) {
                    if (!temp_id) {
                        return false;
                    }
                    if (temp_id < 1 || temp_id > 20) {
                        cout << "Error: ID must be bigger then 1 and smaller then 20";
                        continue;
                    }
                } else {
                    cout << "Please type number";
                    clear();
                    continue;
                }
            } else if (column == 2) {
                if (user_input.length() < 3 || user_input.length() > 50) {
                    cout << "Error: Nickname must be between 3 and 50 letters!" << endl;
                    continue;
                }
            }
            break;
        }
        return fetch(type, user_input);
    }
};

void show_menu() {
    unsigned int selected_option;

    while (true) {
        cout << "1. Show player stats by ID\n";
        cout << "2. Show player stats by nickname\n";
        cout << "3. Exit\n";
        cout << "Select one of these (1-3): ";

        cin >> selected_option;

        if (cin.fail()) {
            cout << "Error: Please enter a number.\n";
            clear();
            continue;
        }
        PlayerAccount player;

        switch (selected_option) {
            case 1:
                if (player.input()) {
                    player.print();
                }
                break;
            case 2:
                if (player.input(2)) {
                    player.print();
                }
                break;
            case 3:
                cout << "Exiting...\n";
                return;
            default:
                cout << "Invalid option selected.\n";
                clear();
                break;
        }
    }
}

int main() {
    start();
    cout << "WELCOME TO JSON CHIKARA!\n\n";

    show_menu();

    stop();
    return 0;
}