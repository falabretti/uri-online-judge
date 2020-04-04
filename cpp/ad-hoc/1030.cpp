#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k) {
    if (n == 1) return 1;
    return (josephus(n - 1, k) + k - 1) % n + 1;
}

int main() {
    int c;
    cin >> c;

    for (int i = 1; i <= c; i++) {
        int n, k;
        cin >> n >> k;

        int res = josephus(n, k);

        printf("Case %d: %d\n", i, res);
    }

    return 0;
}