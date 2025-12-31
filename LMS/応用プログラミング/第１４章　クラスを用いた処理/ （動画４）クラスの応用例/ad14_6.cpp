#include <cmath> // For sqrt, pow
#include <iostream>

using namespace std;

class Point {
private:
    double x, y;

public:
    // Constructor
    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }

    // Move method
    void move(double dx, double dy) {
        x += dx;
        y += dy;
    }

    // Method to calculate distance from origin
    double distance() {
        return sqrt(pow(x, 2) + pow(y, 2));
    }

    void print() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(3.0, 4.0);

    cout << "Initial: ";
    p1.print();
    cout << "Distance: " << p1.distance() << endl;

    p1.move(1.0, 2.0);
    cout << "Moved: ";
    p1.print();

    return 0;
}