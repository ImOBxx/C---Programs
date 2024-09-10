#include "iostream"
using namespace std;

int main()
{
    char Text[ ] = "Cpp@Buzz";
    
    for(int I = 0; Text[I] != '\0'; I++)  // Change loop condition to end at null terminator
    {
        if(!isalpha(Text[I]))  // If character is not alphabetic
            Text[I] = '*';
        else if(isupper(Text[I]))  // If character is upper-case
            Text[I] = Text[I] + 1;
        else  // If character is lower-case alphabetic
            Text[I] = Text[I + 1];  // This can be risky, let's handle it carefully
    }
    
    cout << Text << endl;

    int a = 1;
    int b = 2;

    cout << ((a++) + b) << "\a";
    return 0;
}
