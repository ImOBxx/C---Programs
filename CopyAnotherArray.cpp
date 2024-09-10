#include <iostream>
using namespace std;

int main()
{
  
  int n;
  cout << "Enter Array 1 Length: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cout << "Enter Array 1 Values: ";
    cin >> arr[i];
  }
  cout << "\n";
  int x;
  cout << "Enter Array 2 Length: ";
  cin >> x;
  int arr1[x];
  int i;
  for (int i = 0; i < x; i++)
  {
    cout << "Enter Array 2 Values: ";
    cin >> arr1[i];
  }
  int arr3[n + x];
  int k = -1;
  for (int i = 0; i < n; i++){
    k++;
    arr3[k] = arr[i];
  }
  for (int i = 0; i < x; i++)
  {
    k++;
    arr3[k] = arr1[i];
  }
  cout << "{";
  for (int i = 0; i < n + x; i++)
  {
    cout << arr3[i] << " ";
  }
  cout << "}";

}