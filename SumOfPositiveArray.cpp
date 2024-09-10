#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Length: ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Values: ";
        cin >>arr[i];
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > 0)
        {
            cout << arr[i] << " " << endl;
            sum = sum + arr[i];
        }
    }
    cout << "Sum Of Positive Integers: " << sum << endl;
}