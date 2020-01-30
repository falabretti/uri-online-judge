#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int arr[5];

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    if(is_sorted(arr, arr + 5)) {
        cout << "C" << endl;
        return 0;
    }

    reverse(arr, arr + 5);

    if(is_sorted(arr, arr + 5)) cout << "D" << endl;
    else  cout << "N" << endl;

    return 0;
}
