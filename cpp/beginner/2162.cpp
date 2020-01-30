#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool padrao = true;

    for(int i = 1; i < n - 1; i++) {
        if(arr[i] > arr[i - 1] and arr[i] < arr[i + 1]) {
            padrao = false;
        }
        if(arr[i] < arr[i - 1] and arr[i] > arr[i + 1]) {
            padrao = false;
        }
        if(arr[i] == arr[i - 1] or arr[i] == arr[i + 1]) {
            padrao = false;
        }
    }

    if(n == 2) {
        if(arr[0] == arr[1]) {
            padrao = false;
        }
    }

    cout << padrao << endl;

    return 0;
}
