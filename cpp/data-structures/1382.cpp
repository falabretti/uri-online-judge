#include <bits/stdc++.h>

using namespace std;

int swap_value(int arr[], int idx) {

    if (arr[idx] == idx + 1)
        return 0;

    int target_idx = arr[idx] - 1;
    swap(arr[idx], arr[target_idx]);

    return 1 + swap_value(arr, idx);
}

int sort_arr(int arr[], int size) {

    int c = 0;

    for (int i = 0; i < size; i++) {
        c += swap_value(arr, i);
    }

    return c;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
           cin >> arr[i];

        int c = sort_arr(arr, n);
        cout << c << endl;
    }

    return 0;
}
