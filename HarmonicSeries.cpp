#include <iostream>
using namespace std;

int main()
{
    float i, j, k, x, sum = 0, n;
    cout <<"\n";
    cout << "Enter The Nth Term: ";
    cin >> n;
    cout <<"\n";
    for (int i = 1; i <= 1; i++)
    {
        k = 1;
        for (j = 1; j <= n; j++)
        {
        k = i / j;
        cout << i << " / " << j << " = " << k << " + " << endl;
       
        sum = sum + k;

        }
    }
     cout <<"\n";
    cout << "Sum of Series Upto " << n << " Terms " << " : " << sum << endl;
    cout <<"\n";
}