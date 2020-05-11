#include <bits/stdc++.h>
using namespace std;

bool bfs(int target, int max) {
    if (target == 1) return true;
    int jump = 1;

    queue<int> q;
    q.push(1);

    while (!q.empty()) {
        jump++;

        int cur = q.front();
        q.pop();

        int next_pos[] = {cur + (2 * jump - 1), cur - (2 * jump - 1)};
        for (int next : next_pos) {
            if (next == target) return true;
            if (next > 0 and next <= max) q.push(next);
        }
    }

    return false;
}

int main() {
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n, m;
    while (cin >> n >> m and n and m) {
        bool res = bfs(m, n);
        cout << (res ? "Let me try!" : "Don't make fun of me!") << endl;
    }

    return 0;
}