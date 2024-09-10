#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;

    int *p = &a;  // Initialize pointer p to point to a
    int *q = &b;  // Initialize pointer q to point to b

    cout << "Before swap:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Swap the values of a and b using pointers
    int t = *p;
    *p = *q;
    *q = t;

    cout << "After swap:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    cout << "Address of a: " << &a << endl;
    cout << "Address of b: " << &b << endl;

    return 0;
}
