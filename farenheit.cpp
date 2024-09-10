#include <iostream>
using namespace std;
double farenheitToCelsius(double farenheit)
{
    double celsius;
    celsius = (farenheit - 32.0) * 5.0 / 9.0;
    return celsius;
}
int main()
{
    double farenheit;
    cout << "Enter Temperature in farenheit (in degrees): ";
    cin >> farenheit;
    cout << "Tempoerature in Celsius (in degrees) = "
    << farenheitToCelsius(farenheit) << endl;

}
