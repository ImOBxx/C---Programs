#include <iostream>
using namespace std;

int main()
{
    int a = 23;
    int b = 2;
    bool prime = true;
    while (b != a) {
        if (a % b == 0)
        {
            prime  = false;
            break;
        }
        if (prime)
        {
        cout << "\n";
        cout << "Prime";
        cout << "\n";
        }
        else
        {
        cout << "Not Prime";
        cout << "\n";
        }
    }
}
