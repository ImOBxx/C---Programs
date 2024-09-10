#include <iostream>
using namespace std;

int main()
{
    int n, num, digit, rev = 0;
    cout << "Enter a positive number: ";
    cin >> num;

    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    cout << "The Reverse of the number is: " << rev << endl;

    if (num  == rev)
    cout << "The Number is a Palindrome.";
    else 
    cout << "The Number is not a palindrome.";
    return 0;
}
    
