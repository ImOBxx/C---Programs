#include <iostream>
using namespace std;

int main()
{
    int n;
    int small;
    int temp;
    int j, i;
    cout << "Enter Array Length: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cout << "Enter Array Values: ";
        cin >> arr[i];
    }
    for (int i = 0; i <= n - 2; i++)
    {
        small = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (arr[j] < arr[small])
            {
                small = j;
            }
        }
    if (i != small)
    {
        temp = arr[i];
        arr[i] = arr[small];
        arr[small] = temp;
    }
    }
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << "\t";
    }
    
}

