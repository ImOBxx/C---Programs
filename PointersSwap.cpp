#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int *ptr = &a;
    int *ptr1 = &b;
    int temp;

    temp = *ptr;
    *ptr = *ptr1;
    *ptr1 = temp;

    cout << a << endl;
    cout << b << endl;


}