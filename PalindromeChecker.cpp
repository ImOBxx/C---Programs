#include <iostream>
using namespace std;

int main()
{
    int r = 0;
    int temp;
    int n = 123;
    int res = 0;
    int m;
    temp = n;

    while (n > 0)
    {
        r = n % 10;
        res = (res * 10)S + r;
        n = n / 10;

    }
    if (temp == res)
    { 
        cout << "\n";
        cout << "Checks as a Palindrome.";
        cout << "\n" << endl;
    }
    else 
    { 
        cout << "\n";
        cout << "Not a Palindrome.";
        cout << "\n" << endl; 
    }

}