#include <iostream>
using namespace std;

int main()
{
    int n, s, e, count, i;
    cout << "Enter Starting Point: ";
    cin >> s;
    cout << "Enter Ending Point: ";
    cin >> e;
    for (int i = s; i <= e; i++)
    {
       count = 0;
       for (int j = 1; j <= i; j++)
       {
        if (i % j == 0)
        {
            count++;
        }
       }
    
    if (count == 2)
    {
        cout << i << " Is Prime Number." << endl;
    }
    else{
        cout << i << " Is Not A Prime Number." << endl;
    }
    }
    cout << endl;
    return 0;
}