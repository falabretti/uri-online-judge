#include <bits/stdc++.h>
using namespace std;

map<int, int> dist;

int bfs(int start, int end) {
    priority_queue<pair<int, int>> pq;
    pq.push(make_pair(0, -start));

    while (!pq.empty()) {
        auto cur = pq.top();
        int cur_dist = -cur.first;
        int cur_val = -cur.second;        
        pq.pop();

        int next_values[] = {cur_val * 2, cur_val * 3, cur_val / 2,
                              cur_val / 3, cur_val + 7, cur_val - 7};

        for (int next : next_values) {
            if (next == end) return cur_dist + 1;
            if (dist[next] == 0 or dist[next] > cur_dist + 1) {
                dist[next] = cur_dist + 1;
                pq.push(make_pair(-dist[next], -next));
            }
        }
    }

    return -1;
}

int main() {
    int n, m;
    cin >> n >> m;

    int res = bfs(n, m);
    cout << res << endl;

    return 0;
}
