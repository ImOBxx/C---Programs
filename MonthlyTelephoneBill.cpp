#include <iostream>
using namespace std;

int main()
{
    float f_100 = 200;
    float f_150 = 0.60;
    float f_200 = 0.50;
    float f_200P = 0.40;
    float calls;
    float amount = 0;
    
    cout << "Enter Number Of Calls: ";
    cin >> calls;
    
    if (calls <= 100)
    {
        amount = f_100;
    }
    else if (calls <= 150)
    {
        amount = f_100 + (calls - 100) * f_150;
    }
    else if (calls <= 200)
    {
        amount = f_100 + (50 * f_150) + (calls - 150) * f_200;
    }
    else // calls > 200
    {
        amount = f_100 + (50 * f_150) + (50 * f_200) + (calls - 200) * f_200P;
    }
    
    cout << "Your Telephone Bill: " << amount << endl;
    
    return 0;
}

