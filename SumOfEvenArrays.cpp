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
        cout << "Enter Array Values: ";
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << "\t" << endl;
            sum = sum + arr[i];
        }
        
    }
     cout << "Sum Of Even Numbers In The Array: " << sum << endl;

}