#include <iostream>
#include "./db/db.h"
#include "./account/account.h"
#include "./utils/util.h"
#include "./main.h"

using namespace std;

int start() {
    clog << "[start] Starting system...\n";
    if (!db_connect()) {
        clog << "[start] System started!\n\n";
        return 0;
    }
    cerr << "\n[start] Filed to start system!\n";
    return 1;
}

int stop() {
    clog << "\n\n[stop] System stopping...\n";
    if (!db_disconnect()) {
        clog << "[stop] System stopped!\n";
        return 0;
    }
    cerr << "\n[stop] Filed to stop system!\n";
    return 1;
}

void show_menu() {
    unsigned int selected_option;

    while (true) {
        cout << "1. Show player stats by ID\n";
        cout << "2. Show player stats by nickname\n";
        cout << "3. Create player account\n";
        cout << "4. Exit\n";
        cout << "Select one of these (1-4): ";

        cin >> selected_option;

        if (cin.fail()) {
            cerr << "\n\nError: Please enter a number.\n\n";
            clear();
            continue;
        }

        Player empty_player = {0};

        InterfaceAccount interface(empty_player);

        switch (selected_option) {
            case 1:
                if (interface.input_search_info(1)) {
                    interface.print_account_info();
                }
                break;
            case 2:
                if (interface.input_search_info(2)) {
                    interface.print_account_info();
                }
                break;
            case 3:
                interface.register_account();
                break;
            case 4:
                cout << "Exiting...\n";
                return;
            default:
                cerr << "\n\nInvalid option selected.\n\n";
                clear();
                break;
        }
    }
}

int main() {
    if (start()) {
        cerr << "\n\nFiled to start.\n\n";
    }
    cout << "WELCOME TO JSON CHIKARA!\n\n";

    show_menu();

    if (stop()) {
        cerr << "\n\nFiled to stop.\n\n";
    }
    return 0;
}