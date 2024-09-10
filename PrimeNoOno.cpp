#include <iostream>
using namespace std;

int main()
{
    
    int s, e;
    int p = 0;
    int r;
    int count;
    cout << "Enter Starting Point: ";
    cin >> s;
    cout << "Enter Ending Point: ";
    cin >> e;
    for (int i = s; i <= e; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
        r = i / j;
        if (r == 0)
        {
            count++;
        }
        }
    }
    if (count == 2)
    {
        cout << "Prime Number.";
        p++;
    }
    else{
        cout << "Composite Number.";
    }
}