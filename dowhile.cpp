#include <iostream>
using namespace std;

int main()
{
    int a, d, n;
    cout << "Enter a, d, n of AP: ";
    cin >> a >> d >> n;
    cout << "Terms of AP : a = " << a << ", d = " << d << ", n = " << n << endl;
    do {
        cout << a << "\t";
        a = a + d;
    }
while (n-- > 1);
cout << endl;

}