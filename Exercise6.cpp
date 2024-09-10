#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int b = 2;
    bool prime = true;
    while (b != a) {
        if (a % b == 0)
        {
            prime = false;
            break;
        }
        b++;
    }
    if (prime)
    cout << "Prime" << endl;
    else 
    cout << "Not prime" << endl;
    return 0;
        }
    