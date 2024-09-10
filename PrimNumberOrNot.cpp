#include <iostream>
using namespace std;

int main()
{
    int num, ctr = 0;
    cout << "Enter A Number: ";
    cin >> num;
    for (int a = 1; a <= num; a++)
    {
        if (num % a == 0)
        {
            ctr++;
        }
    }
        if (ctr == 2)
        {
            cout << "The Number Is A Prime Number." << endl;
        }
        else;
        {
            cout << "The Number Is A Not A Prime Number." << endl;
        }
    
}