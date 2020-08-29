#include <bits/stdc++.h>

using namespace std;

int gcd(int n, int m) {
    if (m == 0) return n;
    return gcd(m, n % m);
}

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;

        int r = gcd(a, b);
        cout << r << endl;
    }

    return 0;
}
