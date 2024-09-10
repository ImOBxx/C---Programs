#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int sum = 0;
    int arr[n] = {1, 2, 3, 4};
    
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << "Sum: " << sum;
}

#include <iostream>
using namespace std;

int main()
{
    int n = 4; // Array size as a constant
    int sum = 0;
    int arr[n] = {1, 2, 3, 4}; // Correct array initialization with curly braces

    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; // Sum the elements of the array
    }

    cout << "Sum: " << sum << endl; // Print the sum

    return 0;
}
