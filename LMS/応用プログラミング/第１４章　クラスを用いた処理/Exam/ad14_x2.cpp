#include <iostream>
#include <string>

class  Messenger {
private:
    std::string msg;

public:
    Messenger(const std::string s) {
        this->msg = s;
        std::cout << "Construct: " << this->msg << std::endl;
    }

    ~Messenger() {
        std::cout << "Destruct: " << this->msg << std::endl;
    }
};

int main() {
    Messenger m1("A");
    if (true) {
        Messenger m2("B");
    }
    Messenger m3("C");
    return 0;
}