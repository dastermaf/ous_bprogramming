#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include "../db/db.h"

class FindAccount {
    bool loaded = false;
public:
    FindAccount() : loaded(false) {};
    bool fetch(const std::string &field, const std::string &value, Player *output_data);
};

class InterfaceAccount {
    Player data;
public:
    InterfaceAccount(const Player &new_data);
    void print_account_info() const;
    bool input_search_info(const unsigned int column = 1);
    int register_account();
};

class ControlAccount {
    Player &account;
public:
    ControlAccount(Player &account);
    int create_account();
};

#endif