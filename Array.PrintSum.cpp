#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int sum = 0;
    int avg = 0;
    int arr[n] = {1, 2, 3, 4}; 

    for (int i = 1; i < n; i++)
    {
        if (arr[i] % i == 0)
        {
            cout << arr[i] << " ";
            sum = sum + arr[i];
            avg = sum / arr[n];
        }
    }
    cout << sum << endl;
    cout << avg << endl;

    return 0;
}
