#include <iostream>
using namespace std;

// Base class (parent)
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Derived class (child)
class MyChild: public MyClass {
    void hard()
    {
        cout << "Some Content."
    }
};

// Derived class (grandchild)
class MyGrandChild: public MyChild, public MyClass {
    void soft()
    {
        cout << "Some Content 2."
    }
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  myObj.hard();
  myObj.soft();
  return 0;
}