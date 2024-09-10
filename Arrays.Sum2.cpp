#include <iostream>
using namespace std;

int main()
{
    const int n = 4; 
    int sum = 0;
    int arr[n] = {1, 2, 3, 4}; 

    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; 
    }

    cout << "Sum: " << sum << endl; 

    return 0;
}
