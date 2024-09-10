#include <iostream>
using namespace std;

class MyClass {
public:
    // Static member variable declaration
    static int count;

    // Constructor
    MyClass() {
        // Increment the static member variable
        count++;
    }

    // Static member function to get the count
    static int getCount() {
        return count;
    }
};

// Static member variable definition and initialization
int MyClass::count = 0;

int main() {
    // Creating objects of MyClass
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    // Accessing the static member variable
    cout << "Count: " << MyClass::getCount() << endl;

    return 0;
}
