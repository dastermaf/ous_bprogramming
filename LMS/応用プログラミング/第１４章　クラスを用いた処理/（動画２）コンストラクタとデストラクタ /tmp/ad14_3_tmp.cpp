#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;

public:
    /* BLANK */

    // Destructor
    // Called when an object is destroyed
    /* BLANK */
};

int main() {
    cout << "=== main start ===" << endl;

    /* BLANK */

    if (true) {
        cout << "=== block start ===" << endl;
        /* BLANK */
        cout << "=== block end ===" << endl;
    }
    // s2 is destroyed here

    cout << "=== main end ===" << endl;
    // s1 is destroyed here

    return 0;
}
