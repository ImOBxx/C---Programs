#include <iostream>
using namespace std;

int main()
{
    int i, s, e, j, p = 0, count, r;
    cout << "Enter Starting Point: ";
    cin >> s;
    cout << "Enter Ending Point: ";
    cin >> e;
    for (i = s; i <= e; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            r = i /))))))j;
            if (r == 0){
            count++;
            }
        }
        if (count == 2)
        {
            cout << "Prime Number.";
            p++;
        }
        else {
            cout << "Composite Number.";
        }
    }
    cout << "Total number Of Prime Numbers is " << p << endl;
}
