#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 5, 4, 3};
    int max = 0;

    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    cout << "\n" << endl;
    cout << max << endl;
    cout << "\n" << endl;


}