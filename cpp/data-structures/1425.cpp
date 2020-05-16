#include <bits/stdc++.h>
using namespace std;

bool bfs(int target, int max) {
    if (target == 1) return true;

    queue<pair<int, int>> q;
    q.push(make_pair(1, 2));

    while (!q.empty()) {
        pair<int, int> cur = q.front();
        int pos = cur.first;
        int jump = cur.second;
        q.pop();

        int next_pos[] = {pos + (2 * jump - 1), pos - (2 * jump - 1)};
        for (int next : next_pos) {
            if (next == target) return true;
            if (next > 0 and next <= max) q.push(make_pair(next, jump + 1));
        }
    }

    return false;
}

int main() {
    int n, m;
    while (cin >> n >> m and n and m) {
        bool res = bfs(m, n);
        cout << (res ? "Let me try!" : "Don't make fun of me!") << endl;
    }

    return 0;
}
