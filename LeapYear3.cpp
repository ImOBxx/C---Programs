#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Enter Year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        cout << "The Year Is a Leap Year.";
    }
    else
    {
        cout << "The Year Is Not a Leap Year.";
    }

    return 0;
}

