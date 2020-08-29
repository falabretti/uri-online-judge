#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

typedef pair<int, int> edge;
typedef vector<edge> adj_list;

void add_edge(adj_list adj[], int v, int u, int w) {

    adj[v].push_back(make_pair(u, w));
    adj[u].push_back(make_pair(v, w));
}

int dijkstra(adj_list adj[], int v_size, int src, int dest) {

    priority_queue<edge, vector<edge>, greater<edge>> pq;
    vector<int> dist(v_size, INF);
    vector<bool> extracted(v_size, false);

    pq.push(make_pair(0, src));
    dist[src] = 0;

    while (!pq.empty()) {

        int cur = pq.top().second;
        pq.pop();
        extracted[cur] = true;

        if (cur == dest) {
            break;
        }

        bool on_path = cur < dest;

        for (auto [v, w] : adj[cur]) {

            if (on_path and cur != v - 1) {
                continue;
            }

            if (not extracted[v] and dist[cur] + w < dist[v]) {
                dist[v] = dist[cur] + w;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    return dist[dest];
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int m;
    int c;
    int k;

    while (scanf("%d %d %d %d", &n, &m, &c, &k) and n and m and c and k) {

        adj_list adj[n];

        while (m--) {
            int v;
            int u;
            int p;

            scanf("%d %d %d", &v, &u, &p);
            add_edge(adj, v, u, p);
        }

        int res = dijkstra(adj, n, k, c - 1);
        printf("%d\n", res);
    }

    return 0;
}
