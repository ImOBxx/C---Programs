#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "cpp strings exercises";
    int x = str.length();

    // Convert the first character to uppercase
    str[0] = toupper(str[0]);

    for (int i = 0; i < x; i++)
    {
        // Check for a space and capitalize the next character if it exists
        if (str[i] == ' ' && i + 1 < x)
        {
            str[i + 1] = toupper(str[i + 1]);
        }
    }

    cout << str << endl;

    return 0;  // Good practice to include return statement in main
}
