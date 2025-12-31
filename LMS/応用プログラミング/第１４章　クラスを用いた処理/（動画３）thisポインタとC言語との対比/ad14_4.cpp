#include <iostream>

using namespace std;

class MyClass {
public:
    void printAddress() {
        // 'this' is the address of the caller object
        cout << "Address inside: " << this << endl;
    }
};

int main() {
    MyClass A;
    MyClass B;

    cout << "Address of A:   " << &A << endl;
    A.printAddress();

    cout << "Address of B:   " << &B << endl;
    B.printAddress();

    return 0;
}
