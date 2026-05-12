#include <iostream>
#include <string>
#include <utility>

using namespace std;

class Company {
public:
    string name = "Artel Electronics";
    int year = 2020;
};

// <-- FRIDGE -->
class Fridge : public Company {
    double width = 0;
    double height = 0;
    bool is_open = false;
    int product_year = 0;
    int serial_number = 0;
    string color = "null";

public:
    Fridge(double w, double h, int year, bool open, string color, int serial_number) {
        width = w;
        height = h;

        product_year = year;
        is_open = open;
    }

    ~Fridge() {
        cout << "Fridge is destroyed." << endl;
    }

    // SET METHODS
    void setDoorState(const bool open) {
        if (open) {
            is_open = true;
            cout << "Door is now open." << endl;
        } else {
            is_open = false;
            cout << "Door is now closed." << endl;
        }
    }

    void setYear(int year) {
        product_year = year;
        cout << "Year is now " << product_year << endl;
    };

    void setSize(double w, double h) {
        width = w;
        height = h;
        cout << "Size is now " << width << " x " << height << endl;
    }

    void setSerialNumber(int serial) {
        serial_number = serial;
        cout << "Serial number is now " << serial_number << endl;
    }

    void setColor(const string& color) {
        this->color = color;
        cout << "Color is now " << color << endl;
    }

    // GET METHODS
    string getColor() const {
        return color;
    }

    double getSize() const {
        return width, height;
    }

    void getDoorState() const {
        cout << "Door is open: " << is_open << endl;
    }

    void getYear() const {
        cout << "Year: " << product_year << endl;
    }

    void showInfo() const {
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "Size: " << width << " x " << height << endl;
        cout << "Serial number: " << serial_number << endl;
        cout << "Color: " << color << endl;
    }
};

// <-- MONITOR -->
class Monitor : public Company {
    double width = 0;
    double height = 0;
    int fps = 0;
    int serial_number = 0;
    string type = "null";
    string color = "null";

public:
    Monitor(const double w, const double h, const int fps, const int serial, const string &type, const string &color) {
        width = w;
        height = h;
        this->fps = fps;
        serial_number = serial;
        this->type = type;
        this->color = color;
    }

    ~Monitor() {
        cout << "Monitor is destroyed." << endl;
    }

    void setSize(int const w, int const h) {
        width = w;
        width = h;
        cout << "Size is now " << width << " x " << height << endl;
    }

    void setFPS(int const fps) {
        this->fps = fps;
        cout << "FPS is now " << fps << endl;
    }

    void setType(string const &type) {
        this->type = type;
    }

    void setSerialNumber(int const serial) {
        serial_number = serial;
        cout << "Serial number is now " << serial_number << endl;
    }

    void setColor(string const &color) {
        this->color = color;
    }

    void showInfo() const {
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "Size: " << width << " x " << height << endl;
        cout << "Serial number: " << serial_number << endl;
        cout << "Color: " << color << endl;
    }
};

// <-- PC -->
class PC : public Company {
    double width = 0;
    double height = 0;
    int ram = 0;
    int serial_number = 0;
    string type = "null";
    string color = "null";

public:
    PC(const double w, const double h, const int ram, const int serial, const string &type, const string &color) {
        width = w;
        height = h;
        this->ram = ram;
        serial_number = serial;
        this->type = type;
        this->color = color;
    }

    ~PC() {
        cout << "PC is destroyed." << endl;
    }

    void setSize(int const w, int const h) {
        width = w;
        width = h;
        cout << "Size is now " << width << " x " << height << endl;
    }

    void setRAM(int const ram) {
        this->ram = ram;
        cout << "RAM is now " << ram << endl;
    }

    void setType(string const &type) {
        this->type = type;
    }

    void setSerialNumber(int const serial) {
        serial_number = serial;
    }

    void setColor(string const &color) {
        this->color = color;
    }

    void showInfo() const {
        cout << "Name: " << name << endl;
        cout << "Year: " << year << endl;
        cout << "Size: " << width << " x " << height << endl;
        cout << "Serial number: " << serial_number << endl;
        cout << "Color: " << color << endl;
    }
};

int main() {
    Fridge fridge1(2, 3, 2020, true, "red", 1010);
    fridge1.showInfo();

    cout << "\nSetting values\n" << endl;
    fridge1.setSize(4, 5);
    fridge1.setYear(2021);
    fridge1.setSerialNumber(1011);
    fridge1.setColor("blue");

    cout << "\nShow values\n" << endl;
    fridge1.showInfo();
}