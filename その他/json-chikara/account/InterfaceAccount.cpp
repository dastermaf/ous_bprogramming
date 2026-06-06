#include <iostream>
#include <cctype>
#include <ctime>

#include "account.h"
#include "../utils/util.h"
#include "../db/db.h"
#include "../parser/parser.h"

using namespace std;

InterfaceAccount::InterfaceAccount(const Player &new_data) : data{new_data} {};

void InterfaceAccount::print_account_info() const {
    cout << "\n====== Player Information ======\n";
    cout << "ID:         " << data.id << endl;
    cout << "Nickname:   " << data.nickname << endl;
    cout << "Balance:    " << data.balance << endl;
    cout << "Level:      " << data.level << endl;
    cout << "Created At: " << data.create_at << endl;
    cout << "================================\n\n";
}

bool InterfaceAccount::input_search_info(const unsigned int column) {
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
            if (!char_to_int(&temp_id, user_input.c_str())) {
                if (!temp_id) {
                    return false;
                }
                if (temp_id < 1 || temp_id > 20) {
                    cerr << "\nError: ID must be bigger then 1 and smaller then 20\n";
                    continue;
                }
            } else {
                cout << "Please type number";
                clear();
                continue;
            }
        } else if (column == 2) {
            if (user_input.length() < 3 || user_input.length() > 50) {
                cerr << "\nError: Nickname must be between 3 and 50 letters!\n";
                continue;
            }
        }
        break;
    }
    if (FindAccount().fetch(type, user_input, &data)) {
        return true;
    }

    return false;
}

int InterfaceAccount::register_account() {
    time_t now = time(nullptr);
    char *time_str = asctime(localtime(&now));
    string user_input;

    while (true) {
        cout << "Set up nickname: " << endl;
        cin >> user_input;

        if (user_input.length() < 1 || user_input.length() > 20) {
            cerr << "Nickname must be more than or equal 1 character and less than 20 characters\n";
            continue;
        }

        break;
    }

    chopy(data.nickname, user_input.c_str());
    clear();

    while (true) {
        cout << "Set up balance: " << endl;
        cin >> user_input;

        if (!indigit(user_input.c_str())) {
            cerr << "Balance must have only numbers\n";
        };

        if (user_input.length() < 1 || user_input.length() > 15) {
            cerr << "Balance must be between 1 and 15 numbers\n";
            continue;
        }
        break;
    }

    data.balance = stod(user_input);

    clear();

    while (true) {
        cout << "Set up level: " << endl;
        cin >> user_input;

        if (!indigit(user_input.c_str())) {
            cerr << "Level must have only numbers\n";
            continue;
        }

        if (user_input.length() < 1 || user_input.length() > 1000) {
            cerr << "Level must be between 1 and 1000 numbers\n";
            continue;
        }

        break;
    }

    char_to_int(&data.level, user_input.c_str());

    chopy(data.create_at, time_str);

    if (ControlAccount(data).create_account()) {
        return 1;
    }

    this->print_account_info();

    return 0;
}