#include <iostream>
#include <string>

class Character {
private:
    std::string name;
    int hp;

public:
    Character(std::string n, int h) {
        name = n;
        hp =h;
    }

    void attack(Character* target) {
        std::cout << name << " attacks " << target->name << "!" << std::endl;
        target->hp -= 10;
        std::cout << target->name << "'s HP: " << target->hp << std::endl;
    }
};

int main() {
    Character p1("Player", 100);
    Character e1("Enemy", 50);

    p1.attack(&e1);
    e1.attack(&p1);

    return 0;
}