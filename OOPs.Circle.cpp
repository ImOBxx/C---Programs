#include <iostream>
using namespace std;

class Circle
{
   private:

   float r;
   float area;
   float cir;

   float areacalc()
   {
    return 3.14 * r * r;
   }

   float circalc()
   {
    return 2 * 3.14 * r;
   }

   public: 

   void take()
   {
     cout << "Enter Circle Radius: ";
     cin >> r;
     area = areacalc();
     cir = circalc();
   }

   void display()
   {
    cout << "The Circle's Area: " << area << endl;
    cout << "The Circle's Circumference: " << cir << endl;
   }

};

int main()
{
    Circle circle1;

    cout << "Enter Circle Computations: " << endl;
    circle1.take();

    cout << "Circle's Computations: " << endl;
    circle1.display();

    return 0;
}
