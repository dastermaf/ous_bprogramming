#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int id;

    // Constructor arguments and member variables have the same name
    /* BLANK */ {
        // Use 'this' to explicitly refer to member variables
        /* BLANK */
        /* BLANK */
    }

    void print() {
        cout << id << ": " << name << endl;
    }
};

int main() {
    Student s1("Taro", 1001);
    s1.print();

    return 0;
}
