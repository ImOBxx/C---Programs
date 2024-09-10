#include <iostream>
using namespace std;

int main()
{
    int first, second;
    cout << " Enter The Numbers : ";
    cin >> first >> second;
    if (first % second == 0)
    cout << "First Number " << first
    << " is divisible by second number "
    << second;
    else 
    cout << "First Number " << first
    << " is not divisble by second number "
    << second << endl;
}