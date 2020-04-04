#include <bits/stdc++.h>
using namespace std;

int josephus_mod(int n, int k) {
    int r = 0;
    for (int i = 2; i < n; i++) r = (r + k) % i;
    return r + 2;
}

int main() {
    int n;
    while (cin >> n and n != 0) {
        int k = 0;
        while (josephus_mod(n, ++k) != 13) {}
        cout << k << endl;
    }

    return 0;
}
