#include <iostream>
#include <string>

#include "../db/db.h"
#include "../parser/parser.h"
#include "../main.h"
#include "account.h"

using namespace std;

bool FindAccount::fetch(const string &field, const string &value, Player *output_data) {
    if (find(1, field.c_str(), value.c_str(), output_data) == 0) {
        loaded = true;
        return true;
    }
    cerr << "\n\nPlayer data not loaded.\n\n" << endl;
    loaded = false;
    return false;
}