#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    string temp = str;
    int x = str.length() - 1;
    string ns = "";
    while (x >= 0)
    {
        ns = ns + str[x];
        x--;
    }
    if (temp == ns)
    {
        cout << "\n";
        cout << "The String Is A Palindrome. " << endl;
        cout << "\n";
    }
    else
    {
        cout << "\n";
        cout << "The String Is Not A Palindrome. " << endl;
        cout << "\n";
    }
}