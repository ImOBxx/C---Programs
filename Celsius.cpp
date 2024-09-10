#include <iostream>
using namespace std;

int main()
{
    float farenheit, celsius;
    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    farenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "The Temperature on Celsius   :" << celsius << endl;
    cout << "The Temperature in Farenheit :" << farenheit << endl;
    return 0;
}