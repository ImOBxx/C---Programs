#include <iostream>
using namespace std;

int main()
{
    int y;
    cout <<"Enter Year: ";
    cin >> y;
    if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
    {
        cout << "The Year Is A Leap Year. ";
    }
    else
    {
        cout << "The Year Is Not A Leap Year.";
    }
}