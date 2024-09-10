#include <iostream>
using namespace std;

int main() 
{
    int num, temp, rev = 0;
    int r;
    cout << "Enter a Number : ";
    cin >> num;
    temp = num;
    while (temp != 0)
    {
        r = temp % 10;
        rev = rev * 10 + r;
        temp /= 10;
    }
cout << "\n The reverse of " << num << " is : " << rev << endl;
return 0;
}