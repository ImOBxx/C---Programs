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
        cout << "Enter Array Values: ";
        cin >> arr[i];
    }
    int min_element = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_element)
        {
            min_element = arr[i];
        }
    }
    cout << "Min Element In Array Is: " << min_element << endl;
}