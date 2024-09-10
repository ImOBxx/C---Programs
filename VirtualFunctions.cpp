#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double calcArea() const = 0;
    virtual double calcPeri() const = 0;

    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double r;
public:
    Circle(double radius) : r(radius) {}

    double calcArea() const override {
        return M_PI * r * r;
    }

    double calcPeri() const override {
        return 2 * M_PI * r;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    double calcArea() const override {
        return length * width;
    }
    double calcPeri() const override {
        return 2 * (length + width);
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;
public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    double calcArea() const override {
        double s = (side1 + side2 + side3) / 2;  
        return sqrt(s * (s - side1) * (s - side2) * (s - side3)); 
    }

    double calcPeri() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Shape* circle = new Circle(5.0);
    Shape* rectangle = new Rectangle(4.0, 6.0);
    Shape* triangle = new Triangle(3.0, 4.0, 5.0);

    cout << "Circle Area: " << circle->calcArea() << endl;
    cout << "Circle Perimeter: " << circle->calcPeri() << endl;

    cout << "Rectangle Area: " << rectangle->calcArea() << endl;
    cout << "Rectangle Perimeter: " << rectangle->calcPeri() << endl;

    cout << "Triangle Area: " << triangle->calcArea() << endl;
    cout << "Triangle Perimeter: " << triangle->calcPeri() << endl;

    delete circle;
    delete rectangle;
    delete triangle;

    return 0;
}
