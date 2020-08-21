#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        sort(arr, arr + n);

        int a = n / 2;
        int b = arr[n / 2] - arr[n / 2 - 1];

        printf("%d %d\n", a, b);
    }

    return 0;
}
