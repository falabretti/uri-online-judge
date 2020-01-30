#include <bits/stdc++.h>

using namespace std;

bool sort_func(int a, int b) {
    return (a % 2 < b % 2) or (a % 2 == 0 and a % 2 == b % 2 and a < b) or (a % 2 != 0 and a % 2 == b % 2 and a > b);
}

int main() {

    // freopen("entrada.in", "r", stdin);
    int n;
    cin >> n;

    int values[n];

    for(int i = 0; i < n; i++) {
        cin >> values[i];
    }

    sort(values, values + n, sort_func);

    for(int val : values) {
        cout << val << endl;
    }

    return 0;
}