#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "\n";
    cout << "Enter Number: ";
    cin >> a;
    cout <<"\n";
    int r;
    int sum = 0;
    int temp = a;
    while (a > 0)
    {
        r = a % 10;
        sum = sum + (r * r * r);
        a = a / 10;
        
    }
    if (temp == sum)
    {
        cout << "Number is an Armstrong Number." << "\n" << endl;
    }
    else {
        cout << "Number is not an Armstrong Number." << "\n" << endl;
    }
}