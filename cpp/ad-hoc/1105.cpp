#include <bits/stdc++.h>
using namespace std;

int main() {
    int b, n;

    while (cin >> b >> n and b != 0 and n != 0) {
        int balances[b];
        for (int i = 0; i < b; i++) cin >> balances[i];

        for (int i = 0; i < n; i++) {
            int d, c, v;
            cin >> d >> c >> v;

            balances[d - 1] -= v;
            balances[c - 1] += v;
        }
        bool is_possible = true;

        for (int value : balances) {
            if (value < 0) {
                is_possible = false;
                break;
            }
        }

        cout << (is_possible ? 'S' : 'N') << endl;
    }

    return 0;
}