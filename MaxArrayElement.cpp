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
    int max_element = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max_element)
        {
            max_element = arr[i];
        }
    }
    cout << "Max Element In Array Is: " << max_element << endl;
}
