#include <iostream>
using namespace std;

class Car
{
    private:
    string company;
    string model;
    int year;

    public:

    void input()
    {
        cout << "Enter Company Name: ";
        cin >> company;
        cout << "Enter Model Of The Car: ";
        cin >> model;
        cout << "Enter Year Of The Make: ";
        cin >> year;
    }

    void show()
    {
        cout << "Comapny Of The Car: " << company << endl;
        cout << "Model Of The Car: " << model << endl;
        cout << "Make Year Of The Car: " << year << endl;
    }
};

int main()
{
    Car car1;
    car1.input();
    car1.show();
}