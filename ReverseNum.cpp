#include <iostream>
using namespace std;

int main()
{
    int val, temp, num = 0;
    cout << "Enter The Number: ";
    cin >> val;
    temp = val;
    while (temp != 0)
    {
        num = num * 10 + temp % 10;
        temp = temp / 10;
        }
        cout << "The given number"  << val
        << " with its digits reversed is " << num << endl;
    }