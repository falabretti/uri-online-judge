#include <bits/stdc++.h>
using namespace std;

bool simulate(int target, int max) {
    int jump = 1;
    int cur = 1;

    while (cur > 0 and cur <= max) {
        jump++;
        if (cur == target or target > 34) return true;

        int next;

        if (cur < target) {
            next = cur + (2 * jump - 1);
            if (next > max) next = cur - (2 * jump - 1);
        } else {
            next = cur - (2 * jump - 1);
            if (next <= 0) next = cur + (2 * jump - 1);
        }

        cur = next;
    }

    return false;
}

int main() {
    int n, m;
    while (cin >> n >> m and n and m) {
        bool res = simulate(m, n);
        cout << (res ? "Let me try!" : "Don't make fun of me!") << endl;
    }

    return 0;
}
