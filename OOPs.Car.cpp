#include <iostream>
using namespace std;

class Car
{
    private:
    string com;
    string mo;
    int year;

    public:

    void take()
    {
        cout << "\n";
        cout << "Enter Car Company Name: ";
        cin >> com;
        cout << "Enter Car Model Number: ";
        cin >> mo;
        cout << "Enter Car Make Year: ";
        cin >> year;
    }

    void display()
    {
        cout << "\n";
        cout << "Car Company: " << com << endl;
        cout << "Car Model Number: " << mo << endl;
        cout << "Car Make Year: " << year << endl;
        cout << "\n";
    }
};

int main()
{
    Car car1;
    cout << "\n";
    cout << "Enter Car Details: " << endl;
    car1.take();
    cout << "\n";
    cout << "CAR DETAILS: " << endl;
    car1.display();
}