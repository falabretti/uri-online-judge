#include <bits/stdc++.h>

using namespace std;

int gcd(int n, int m) {
    if (m == 0) return n;
    return gcd(m, n % m);
}

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        int n1 = strtol(s1.c_str(), NULL, 2);
        int n2 = strtol(s2.c_str(), NULL, 2);

        if (n1 < n2) swap(n1, n2);

        int md = gcd(n1, n2);

        if (md > 1)
            printf("Pair #%d: All you need is love!\n", i);
        else
            printf("Pair #%d: Love is not all you need!\n", i);
    }

    return 0;
}
