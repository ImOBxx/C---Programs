#include <iostream>
using namespace std;

int main()
{
    int n = 689, m, r = 0;
    cout << "Number is: " << n << endl;
    while (n > 0)
    {
        m = n % 10;
        r = (r * 10) + m;
        n = n / 10;
    }
    cout << "Reverse Number: " << r << endl;
}