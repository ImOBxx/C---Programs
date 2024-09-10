#include <iostream>
using namespace std;


struct person
{
    string name;
    int age;
    float salary;
};

int main()
{
    person p1;
    person *ptr;
    ptr=&p1;
    cout << "Enter Full name: ";
    getline(cin,p1.name);
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary;
    
    cout << "\nDisplaying Information in term of pointer" << endl;
    cout << "Name: " << ptr->name << endl;
    cout <<"Age: " << ptr->age << endl;
    cout << "Salary: " << ptr->salary;
    
    cout << "\nDisplaying Address of members in term of pointer" << endl;
    cout << "Address of Name: " << &ptr->name << endl;
    cout <<"Address of Age: " << &ptr->age << endl;
    cout << "Address of Salary: " << &ptr->salary;

    return 0;
}





