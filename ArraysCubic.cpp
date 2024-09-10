#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Values: ";
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + (arr[i] * arr[i] * arr[i]);
    }
    cout << "Cubic Sum: " << sum << endl;

}