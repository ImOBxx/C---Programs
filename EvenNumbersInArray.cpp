#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "Enter Array Values: ";
        cin >> arr[i];
    }
    cout << "{";
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << ", ";
        }
    }
    cout << "}";
}