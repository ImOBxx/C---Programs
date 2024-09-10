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
        cout << "Enter Number: ";
        cin >> arr[i];
    }
    int sum = 1;
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = f * (arr[i] * arr[i] * arr[i]);
         cout << sum <<  "\t";
       
        
    }
     
}