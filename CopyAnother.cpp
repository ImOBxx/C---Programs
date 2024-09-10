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
    int x;
    cout << "Enter Number: ";
    cin >> x;
    int arr1[x];
    int i;
    for ( i = 0; i < x; i++)
    {
        cout << "Enter Values: ";
        cin >> arr1[i];
    }

    int arr3[n+x];
    int k=-1;
    for(i=0;i<n;i++)
    {
        k++;
        arr3[k]=arr[i];
    }
    for(i=0;i<x;i++)
    {
        k++;
        arr3[k]=arr1[i];
    }
    cout << "{ ";
for(i=0;i<n+x;i++)
{
    cout<<arr3[i] << ", ";
}
cout << " } ";

    
}
