#include <iostream>
using namespace std;

int main()
{
    int n = 689;
    int m;
    int sum;
    while (n > 0)
    {
        m = n % 10;
        cout << m << endl;
        n = n / 10;
    }
    sum = sum + n;
}