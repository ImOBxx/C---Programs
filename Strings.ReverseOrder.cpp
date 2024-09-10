#include <iostream>
using namespace std;

int main()
{
    int len;
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    len = str.size();
    cout << len << endl;
    cout << "Reversed String: ";
    for (int  i = len - 1; i >= 0; i--) {
        cout << str[i];
    } 
    cout << len << endl;
    cout << endl;
}