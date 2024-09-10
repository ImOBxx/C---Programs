#include <iostream>
using namespace std;


// Base class
class Animal {
public:
    void sound() {
        cout << "The animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() {
        cout << "The dog barks." << endl;
    }
};

int main() {
    // Create an object of the base class
    Animal animal;

    // Call the base class method
    animal.sound();

    // Create an object of the derived class
    Dog dog;

    // Call the derived class method
    dog.sound();

    return 0;
}

