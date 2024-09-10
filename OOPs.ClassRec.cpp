#include <iostream>
using namespace std;

class Rectangle
{
   private:
   float len;
   float wid;
   float area;
   float peri;

   float areacalc()
   {
     return (len * wid);
   }

   float pericalc()
   {
     return 2 * (len + wid);
   }

   public:
   
   void take()
   {
     cout << "Enter The Rectangle's Length: " << endl;
     cin >> len;
     cout << "Enter The Rectagle's Width: " << endl;
     cin >> wid;
     area = areacalc();
     peri = pericalc();
   }

   void dipslay()
   {
    cout << "Rectagle's Area: " << area << endl;
    cout << "Perimeter Of The Rectangle: " << peri << endl;
   }

};

int main()
{
    Rectangle rec1;

    cout << "Enter Rectamgle's Dimensions: " << endl;
    rec1.take();

    cout << "RECTANGLE" << endl; 
    rec1.dipslay();

}