#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int id;

    // Constructor arguments and member variables have the same name
    Student(string name, int id) {
        // Use 'this' to explicitly refer to member variables
        this->name = name;
        this->id = id;
    }

    void print() {
        cout << id << ": " << name << endl;
    }
};

int main() {
    Student s1("Taro", 1001);
    s1.print();

    return 0;
};