#include <iostream>

#include "../db/db.h"
#include "../parser/parser.h"
#include "account.h"

using namespace std;

ControlAccount::ControlAccount(Player &account) : account(account) {};

int ControlAccount::create_account() const {
    account.id = post_account(&account);

    cout << "\nAccount created!\n" << endl;

    FindAccount find_account;
    if (!(find_account.fetch("id", to_string(account.id), &account))) {
        cerr << "\nID does not exist!\n";
        return 1;
    }

    return 0;
}