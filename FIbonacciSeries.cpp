#include <iostream>
using namespace std;

int main() 
 { 
    int n, first = 0, second = 1, next; 
    cout << "Enter the number of terms: "; 
    cin >> n; 
    cout << "Fibonacci sequence: " << first << " " << second << " "; 
    int i = 2; 
    while (i < n) { 
        next = first + second; 
        first = second; 
        second = next; 
        cout << next << " "; 
        i++; 
    } 
    return 0; 
}
