#include <iostream>
using namespace std;

class Person
{
    private:
    string name;
    int age;
    string country;

    public:

    void take()
    {
        cout << "Enter Person's Name: ";
        cin >> name;
        cout << "Enter Person's Age: ";
        cin >> age;
        cout << "Enter Persom's Country: ";
        cin >> country;
    }

    void display()
    {
        cout << "Person's Name: " << name << endl;
        cout << "Person's Age: " << age << endl;
        cout << "Person's Country: " << country << endl;
    }

};

int main()
{
    Person son1;

    cout << "Enter Person's Details: ";
    son1.take();

    cout << "Person's Details: ";
    son1.display();

}