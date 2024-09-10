#include <iostream>
using namespace std;

int main()
{
    int len;
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    len = str.size();
    cout << "Reversed String: ";
    for (int  i = len; i >= 0; i--)
    {
        cout << str[i];
    }
    cout << endl;
}

