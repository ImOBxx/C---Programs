#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    int i, n = 1, a, res = 1, sum = 0;
    cout << "Enter Number: ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        n = n * i;
        
    }
    cout << "Factorial of " << a << " is " << n << endl;

}