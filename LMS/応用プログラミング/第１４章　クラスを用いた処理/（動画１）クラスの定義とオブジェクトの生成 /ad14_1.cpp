#include <iostream>
#include <string>

using namespace std;

// Definition of Student class
class Student {
public:
    // Member variables
    string name;
    int score;

    // Member function
    void print() {
        cout << name << ": " << score << endl;
    }
};

int main() {
    // Creating a Student object
    Student s1;

    // Accessing member variables
    s1.name = "Taro";
    s1.score = 85;

    // Calling a member function
    s1.print();

    return 0;
}