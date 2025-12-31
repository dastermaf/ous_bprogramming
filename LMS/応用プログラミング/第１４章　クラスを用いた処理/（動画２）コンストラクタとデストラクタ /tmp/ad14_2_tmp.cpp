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
    /* BLANK */

    void print() {
        cout << name << ": " << score << endl;
    }
};

int main() {
    // Initialized upon creation
    /* BLANK */

    s1.print();
    s2.print();

    return 0;
}
