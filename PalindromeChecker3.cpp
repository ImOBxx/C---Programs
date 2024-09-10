#include <iostream>
using namespace std;

int main()
{
    int temp, n, r, sum = 0;
    cout <<"\n";
    cout << "Enter Number: ";
    cin >> n;
    cout <<"\n";
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
    {
        cout << "The Number Is A Palindrome. " << endl;
        cout <<"\n";
    
    }
    else {
        cout << "The Number Is Not A Palindrome. " << endl;
        cout <<"\n";
    }
}