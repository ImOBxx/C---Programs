#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter String: ";
    getline(cin, str);
    int x = str.length() - 1;
    string ns = "";
    while(x >= 0)
    {
        ns = ns + str[x];
        x--;
    } 
    cout << ns << endl;

}