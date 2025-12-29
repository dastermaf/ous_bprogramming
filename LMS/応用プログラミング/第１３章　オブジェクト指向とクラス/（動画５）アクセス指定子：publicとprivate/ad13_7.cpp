#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int score;

public:
    void init(std::string n, int s) {
        name = n;
        score = s;
    }

    void print() {
        std::cout << "Name " << name << std::endl;
        std::cout << "Score " << score << std::endl;
    }
};

int main() {
    Student s1;

    s1.init("Taro", 80);
    s1.print();

    // s1.score = 100; // Error! Private member

    return (0);
}