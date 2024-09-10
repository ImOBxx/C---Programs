#include <iostream>
#include <cmath>

using namespace std;

// Base class
class Shape {
protected:
    string color;

public:
    Shape(const string &color) : color(color) {}

    // Virtual methods to be overridden by derived classes
    virtual double area() const = 0;  // Pure virtual method
    virtual double perimeter() const = 0;  // Pure virtual method

    void displayColor() const {
        cout << "Shape color: " << color << "\n";
    }
};

// Derived class from Shape
class Circle : public Shape {
private:
    double radius;

public:
    Circle(const string &color, double radius) : Shape(color), radius(radius) {}

    // Override the area method
    double area() const override {
        return M_PI * radius * radius;
    }

    // Override the perimeter method
    double perimeter() const override {
        return 2 * M_PI * radius;
    }

    void display() const {
        displayColor();
        cout << "Circle radius: " << radius << "\n";
        cout << "Circle area: " << area() << "\n";
        cout << "Circle perimeter: " << perimeter() << "\n";
    }
};

// Derived class from Shape
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(const string &color, double length, double width) 
        : Shape(color), length(length), width(width) {}

    // Override the area method
    double area() const override {
        return length * width;
    }

    // Override the perimeter method
    double perimeter() const override {
        return 2 * (length + width);
    }

    void display() const {
        displayColor();
        cout << "Rectangle length: " << length << "\n";
        cout << "Rectangle width: " << width << "\n";
        cout << "Rectangle area: " << area() << "\n";
        cout << "Rectangle perimeter: " << perimeter() << "\n";
    }
};

int main() {
    // Create objects of Circle and Rectangle
    Circle myCircle("Red", 5.0);
    Rectangle myRectangle("Blue", 4.0, 6.0);

    // Display properties and calculations
    myCircle.display();
    cout << "------------------\n";
    myRectangle.display();

    return 0;
}
