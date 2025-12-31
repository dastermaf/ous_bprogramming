#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int score;

public:
    // Constructor
    // Called when an object is created
    Student(string n, int s) {
        name = n;
        score = s;
        cout << "Constructor called for " << name << endl;
    }

    void print() {
        cout << name << ": " << score << endl;
    }
};

int main() {
    // Initialized upon creation
    Student s1("Taro", 85);
    Student s2("Hanako", 92);

    s1.print();
    s2.print();

    return 0;
}