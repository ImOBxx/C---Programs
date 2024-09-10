#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_element = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    cout << "The maximum element is: " << max_element << endl;

    return 0;
}

