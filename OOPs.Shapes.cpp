#include <iostream>
#include <cmath>

// Base class
class Shape {
public:
    // Virtual functions for area and perimeter
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class for Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }

    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

// Derived class for Rectangle
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }
};

// Derived class for Triangle
class Triangle : public Shape {
private:
    double a, b, c; // sides of the triangle
public:
    Triangle(double side1, double side2, double side3) : a(side1), b(side2), c(side3) {}

    double area() const override {
        double s = (a + b + c) / 2; // semi-perimeter
        return std::sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
    }

    double perimeter() const override {
        return a + b + c;
    }
};

int main() {
    Shape* shapes[3];

    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);
    shapes[2] = new Triangle(3.0, 4.0, 5.0);

    for (int i = 0; i < 3; ++i) {
        std::cout << "Shape " << i + 1 << " area: " << shapes[i]->area() << std::endl;
        std::cout << "Shape " << i + 1 << " perimeter: " << shapes[i]->perimeter() << std::endl;
    }

    // Free the allocated memory
    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}
