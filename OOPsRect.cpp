#include <iostream>
using namespace std;

class Rectangle
{
    private:
    double l;
    double b;
   
    public:
    void input()
    {
        cout << "Enter Length: ";
        cin >> l;
        cout << "Enter Breadth: ";
        cin >> b;
    }

    double areacalc()
    {
        return l * b;    
    }

    double pericalc()
    {
        return 2 * (l + b);
    }

    void show()
    {
        cout << "Area Of The Rectangle: " << areacalc() << endl;
        cout << "Perimeter Of The Rectangle: " << pericalc() << endl;
    }

};

int main()
{
    Rectangle rec;
    rec.input();
    rec.show();
}