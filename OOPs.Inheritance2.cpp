#include <iostream>
#include <string>

using namespace std;

// Base class
class Animal {
protected:
    string name;

public:
    Animal(const string &name) : name(name) {}

    // Virtual method to be overridden by derived classes
    virtual void speak() const {
        cout << "Some generic animal sound\n";
    }

    // Method to display the name
    void displayName() const {
        cout << "Animal's name: " << name << "\n";
    }
};

// Derived class from Animal
class Dog : public Animal {
public:
    Dog(const string &name) : Animal(name) {}

    // Override the speak method
    void speak() const override {
        cout << "Woof! Woof!\n";
    }
};

// Derived class from Animal
class Cat : public Animal {
public:
    Cat(const string &name) : Animal(name) {}

    // Override the speak method
    void speak() const override {
        cout << "Meow! Meow!\n";
    }
};

int main() {
    // Create objects of Dog and Cat
    Dog myDog("Buddy");
    Cat myCat("Whiskers");

    // Display names and speak
    myDog.displayName();
    myDog.speak();

    myCat.displayName();
    myCat.speak();

    return 0;
}
