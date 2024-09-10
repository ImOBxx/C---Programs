#include <iostream>
using namespace std;
int main() {
    float a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
    cout << "Largest Number: " << a << endl;
    if (b >= a && b >= c)
    cout << "Largest Number: " << b << endl;
    if (c >= a && c >= b)
    cout << "Largest number: " << c << endl;
    return 0;    
}