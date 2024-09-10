#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter Number: ";
    cin >> a;
    int res = 0;
    while (a != 0) {
        int dig = a % 10;
        res = res * 10 + dig;
        a = a / 10;
    }
    cout << "\n";
    cout << res;
    cout << "\n" << endl;;
}