#include <iostream>
using namespace std;

class Person
{
   string name;
   int age;
   string country;
   
   public:
   void input()
   {
      cout << "Enter Name: ";
      cin >> name;
      cout << "Enter Age: ";
      cin >> age;
      cout << "Enter Country: ";
      cin >> country;
   }

   void show()
   {
      cout << "Name Of The Person: " << name << endl;
      cout << "Age of The Person: " << age << endl;
      cout << "Country Of The Person: " << country << endl;
   }

};

int main()
{
    Person per;
    per.input();
    per.show();
}