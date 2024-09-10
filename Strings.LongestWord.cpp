#include <iostream>
using namespace std;

int main()
{
    string str = "C++ Is A Programming Language ";
    string f;
    string n = str.substr(4, 5);
    cout << n << endl;
    int st = 0;
    int x = str.length() - 1;
    int len = 0;
    int v;
    for (int i = 0; i <= x; i++)
    {
        char ch = str[i];
        if (ch == ' ' || i == x)
        {
            string n = str.substr(st, i - st);
            cout << n << endl;
            st = i + 1;
            v = n.size();
            cout << v << endl;
            if (n > len)
            {
                len = v;
                f = n;
            }
        }
    }
    cout << "Longest Word: " << f << endl;
}