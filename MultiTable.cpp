#include <iostream>
using namespace std;

int main()
{
    int s = 2;
    int e = 9;
    int sum;
    for (int i = 2; i <= 9; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            sum = i * j;
            cout << i << " x " << j << " = " << sum << endl; 
        }
        
    }

}