#include <iostream>
using namespace std;
float PI = 3.14;

void calculateArea(string shape)
{
    switch (shape[0]) {
        case 'c':
        float r;
        cout << "\nEnter the Radius: ";
        cin >> r;
        cout << "\nArea of Circle : " << PI * r * r << " square units " << endl;
        break;
        case 's':
        float a;
        cout << "\nEnter the side length";
        cin >> a;
        cout << "\nArea of Square : " << a * a << " square units " << endl;
        break;
        case 'r':
        float b, h;
        cout << "\nEnter the breadth: ";
        cin >> b;
        cout << "\nEnter the height: ";
        cin >> h;
        cout << "\nArea of Rectangle : " << b * h << " square units " << endl;
        break;
    }
}
int main()
{
    string s;
    cout << "Enter the shape : ";
    getline(cin, s);
    calculateArea(s);
}
 