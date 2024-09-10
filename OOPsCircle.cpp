#include <iostream>
#include <cmath>

using namespace std;

class Circle1
{
   private:
   double r;

   public:

   void input()
   {
       cout << "Enter Radius: ";
       cin >> r;
   }

   double areacalc()
   {
      return M_PI * r * r;
   }

   double circalc()
   {
      return 2 * M_PI * r;
   }

   void show()
   {
      cout << "The Area Of The Circle: " << areacalc() << endl;
      cout << "The Circumference Of The Circle: " << circalc() << endl;
   }

};

int main()
{
    Circle1 Obj;
    Obj.input();
    Obj.areacalc();
    Obj.circalc();
    Obj.show();
}

