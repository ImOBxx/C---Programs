#include <iostream>
using namespace std;

int main()
{
    int num, ctr = 0;
    cout << "Input A Number: ";
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
        cout << "The Number is Prime Number";
    }
    else {
        cout << "The Number Is Not A Prime Number.";
    } 
    
}