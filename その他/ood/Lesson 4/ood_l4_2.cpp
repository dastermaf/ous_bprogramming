#include <iostream>
using namespace std;

const double pi = 3.14159265359;

class Figure {
public:
    virtual double Area() {
        return 0;
    }

    virtual double Perimeter() {
        return 0;
    }

    virtual void Draw() {
        cout << "Drawing Figure" << endl;
    }
};

class Circle : public Figure {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double Area() override {
        return pi * radius * radius;
    }

    double Perimeter() override {
        return 2 * pi * radius;
    }

    void Draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Figure {
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    double Area() override {
        return width * height;
    }

    double Perimeter() override {
        return 2 * (width + height);
    }

    void Draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

class Square : public Rectangle {
private:
    double side;

public:
    Square(double s) : Rectangle(s, s) {
        side = s;
    }

    double Area() override {
        return side * side;
    }

    double Perimeter() override {
        return 4 * side;
    }

    void Draw() override {
        cout << "Drawing Square" << endl;
    }
};

int main() {
    Figure* c = new Circle(5);
    Figure* r = new Rectangle(10, 6);
    Rectangle* s = new Square(4);

    c->Draw();
    cout << "Circle Area: " << c->Area() << endl;
    cout << "Circle Perimeter: " << c->Perimeter() << endl;

    r->Draw();
    cout << "Rectangle Area: " << r->Area() << endl;
    cout << "Rectangle Perimeter: " << r->Perimeter() << endl;

    s->Draw();
    cout << "Square Area: " << s->Area() << endl;
    cout << "Square Perimeter: " << s->Perimeter() << endl;

    delete c;
    delete r;
    delete s;

    return 0;
}