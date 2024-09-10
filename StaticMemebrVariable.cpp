#include <iostream>

using namespace std;

class MyClass {
public:
    
     static int count;
     int count1;
     void nostaticdisplayCount() {
        cout << "Count1: " << ++count1 << endl;
     }

    // Static member function
    static void displayCount() {
        cout << "Count: " << count << endl;
    }

    // Constructor to increment count when an object is created
    MyClass() {
        ++count;
        count1=0;
    }
};

// Initialize static member variable
int MyClass::count = 0;

int main() {
    // Create objects
    MyClass obj1;
    obj1.nostaticdisplayCount();
    MyClass::displayCount(); // Output: Count: 2
    MyClass obj2;

    obj2.nostaticdisplayCount();
    // Call static member function
    MyClass::displayCount(); // Output: Count: 2

    return 0;
}
