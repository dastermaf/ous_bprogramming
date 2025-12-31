#include <iostream>
#include <string>

class Character {
private:
    std::string name;
    int hp;

public:
    Character(std::string n, int h) {
        name = n;
        if (h < 0) {
            hp = 0;
        } else {
            hp = h;
        }
    }

    void show_status() const {
        std::cout << name << ": HP " << hp << std::endl;
    }
};

int main() {
    Character hero("Hero", 100);
    Character zombie("Zombie", -50);

    hero.show_status();
    hero.show_status();

    return 0;
}