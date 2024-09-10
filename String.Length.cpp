#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    string n;
    cout << "Enter String: ";
    getline(cin, n);
    cout << "\n";
    size_t l = n.length();
    cout << "The Length Of The String Is: " << l << endl;
    cout << "\n";
    string p = "";
    for (char c : n) {
        if (c != ' ') {
            p += c;
        }
    }
    cout << "String Witout Spaces: " << p << endl;
    cout << "\n";

}
