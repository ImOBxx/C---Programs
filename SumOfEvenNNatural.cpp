#include <iostream>
using namespace std;

int main()
{
   int i, sum = 0, n;
   int x = 0;
   cout << "Enter Number: ";
   cin >> n;
   for (i = 1; i <= n; i++)
   {
     x = x + 2;
     cout << x << endl;
     sum = sum + x;
   }
   cout << "Sum of Number: " << sum << endl;
   
}