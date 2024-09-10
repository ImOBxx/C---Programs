#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    cout << "Perfect Cubes Below 1000: ";
    int c = 1;
    int t = 1;
    int x = 1;
    while (c <= 1000)
    {
        cout << x << endl;
        t = t + 1;
        x = t * t * t;
        c = c + 1;
    }
    cout << "\n";
}