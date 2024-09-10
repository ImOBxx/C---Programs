#include <iostream>
using namespace std;

int main()
{
    int y;
    cout << "Enter Year: ";
    cin >> y;
    if ((y % 400 == 0) || y % 100 != 0 && y % 4 == 0)
    {
        cout << "Leap Year" << endl;
    }
    else
    {
        cout << "The Year Is Not A Leap Year." << endl;
    }

}