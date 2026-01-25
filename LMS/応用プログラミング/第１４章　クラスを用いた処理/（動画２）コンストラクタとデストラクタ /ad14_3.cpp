#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;

public:
    Student (string n) {
        name = n;
        cout << "Construct: " << name << endl;
    }

    // Destructor
    // Called when an object is destroyed
    ~Student() {
        cout << "Destruct: " << name << endl;
    }
};

int main() {
    cout << "=== main start ===" << endl;

    Student s1("Taro");

    if (true) {
        cout << "=== block start ===" << endl;
        Student s2("Hanako");
        cout << "=== block end ===" << endl;
    } // Block scope
    // s2 is destroyed here
    Student s3("Jopa Oslika");
    cout << "=== main end ===" << endl;
    // s1 is destroyed here

    return 0;
}