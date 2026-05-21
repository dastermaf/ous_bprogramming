#include <iostream>

#include "../db/db.h"
#include "../parser/parser.h"
#include "account.h"

using namespace std;

class ControlAccount {
    Player &account;

    public:
    ControlAccount(Player &account) : account(account) {};

    int create_account() {

        account.id = post_account(&account);

        cout << "\nAccount created!\n" << endl;

        FindAccount find_account;
        if (!(find_account.fetch("id", to_string(account.id), &account))) {
            cerr << "\nID does not exist!\n";
            return 1;
        }

        return 0;
    }
};