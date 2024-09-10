#include <iostream>
using namespace std;
int main()
{
    int power;
    float base, result = 1;
    cin >> base >> power;
    while (power != 0) {
        result *= base;
        power--;
    }
    cout << result << endl;
    return 0;
}


